#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(920, 440, 830, "zeros");
	float *B = create_one_dim_float(820, "zeros");

	for (int c = 2; c < 829; c++)
	  for (int b = 3; b < 436; b++)
	    for (int a = 4; a < 820; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-3][c-2]*B[a];
	      
	      B[a]=B[a-1]/A[a][b][c];
	      
	      A[a][b][c]=0.241;
	      
	      float var_a=B[a]-0.188;
	      float var_b=B[a-4]+0.378;
	    }

    return 0;
}