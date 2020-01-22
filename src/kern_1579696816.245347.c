#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(800, 500, 310, "zeros");
	float *A = create_one_dim_float(770, "zeros");

	for (int c = 0; c < 308; c++)
	  for (int b = 0; b < 495; b++)
	    for (int a = 0; a < 765; a++)
	    {
	      
	      A[a]=A[a+5]-B[a][b][c];
	      
	      B[a][b][c]=0.417;
	      B[a+2][b+5][c+2]=0.974;
	      
	      A[a]=B[a][b][c]+A[a];
	      B[a][b][c]=B[a+1][b+3][c]-A[a];
	    }

    return 0;
}