#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(90, "zeros");
	float ***A = create_three_dim_float(750, 760, 800, "zeros");

	for (int c = 4; c < 796; c++)
	  for (int b = 5; b < 759; b++)
	    for (int a = 5; a < 86; a++)
	    {
	      
	      B[a]=B[a+4]-A[a][b][c];
	      
	      A[a][b][c]=0.48;
	      A[a+3][b+1][c+4]=0.62;
	      
	      A[a][b][c]=0.437;
	    }

    return 0;
}