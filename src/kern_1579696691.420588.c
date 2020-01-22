#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(940, "zeros");
	float ***B = create_three_dim_float(750, 280, 920, "zeros");

	for (int c = 4; c < 920; c++)
	  for (int b = 0; b < 280; b++)
	    for (int a = 2; a < 750; a++)
	    {
	      
	      A[a]=A[a-1]*0.86;
	      
	      A[a]=A[a-2]+B[a][b][c];
	      
	      A[a]=0.268;
	      
	      float var_b=B[a][b][c]*0.607;
	      float var_c=B[a][b][c-4]+0.303;
	    }

    return 0;
}