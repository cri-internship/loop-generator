#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(130, "ones");
	double ***B = create_three_dim_double(770, 680, 240, "ones");

	for (int c = 3; c < 236; c++)
	  for (int b = 0; b < 675; b++)
	    for (int a = 5; a < 128; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b][c-3]+0.234;
	      
	      A[a]=A[a+2]-B[a][b][c];
	      
	      A[a]=0.801;
	      
	      A[a]=B[a][b][c]-A[a];
	      B[a][b][c]=B[a+5][b+5][c+4]*A[a];
	    }

    return 0;
}