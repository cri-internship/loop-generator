#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(510, "zeros");
	float ***A = create_three_dim_float(390, 200, 350, "zeros");
	float *B = create_one_dim_float(880, "zeros");

	for (int c = 4; c < 509; c++)
	  for (int b = 4; b < 509; b++)
	    for (int a = 4; a < 509; a++)
	    {
	      
	      B[a]=B[a-4]/0.283;
	      
	      float var_a=B[a]+0.181;
	      float var_b=B[a+2]*0.521;
	      
	      float var_c=C[a]-0.642;
	      float var_d=C[a+1]-0.637;
	    }

    return 0;
}