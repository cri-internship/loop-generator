#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(680, 990, "zeros");
	float *E = create_one_dim_float(380, "zeros");
	float ***C = create_three_dim_float(350, 40, 170, "zeros");
	float **D = create_two_dim_float(340, 420, "zeros");
	float *B = create_one_dim_float(590, "zeros");

	for (int d = 0; d < 378; d++)
	  for (int c = 0; c < 378; c++)
	    for (int b = 0; b < 378; b++)
	      for (int a = 0; a < 378; a++)
	      {
	        
	       float var_a=B[a]/0.116;
	       float var_b=B[a]-0.716;
	        
	       float var_c=E[a]-0.14;
	       float var_d=E[a+2]/0.478;
	      }

    return 0;
}