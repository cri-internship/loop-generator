#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(380, 920, 60, "ones");
	float *D = create_one_dim_float(440, "ones");
	float ***B = create_three_dim_float(140, 540, 860, "ones");
	float **A = create_two_dim_float(190, 910, "ones");

	for (int d = 3; d < 860; d++)
	  for (int c = 2; c < 540; c++)
	    for (int b = 0; b < 140; b++)
	      for (int a = 0; a < 140; a++)
	      {
	        
	       float var_a=B[a][b][c]/0.134;
	       float var_b=B[a][b-2][c-3]-0.488;
	      }

    return 0;
}