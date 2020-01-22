#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(780, 350, 290, "random");
	float *A = create_one_dim_float(590, "random");

	for (int c = 0; c < 288; c++)
	  for (int b = 0; b < 345; b++)
	    for (int a = 0; a < 587; a++)
	    {
	      
	      A[a]=A[a+3]*0.172;
	      
	      float var_a=B[a][b][c]*0.251;
	      float var_b=B[a+3][b+5][c+2]*0.737;
	    }

    return 0;
}