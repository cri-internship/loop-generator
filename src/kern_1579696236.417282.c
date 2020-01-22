#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(690, "ones");
	float ***A = create_three_dim_float(980, 60, 360, "ones");
	float **C = create_two_dim_float(630, 780, "ones");
	float *D = create_one_dim_float(20, "ones");

	for (int c = 0; c < 687; c++)
	  for (int b = 0; b < 687; b++)
	    for (int a = 0; a < 687; a++)
	    {
	      
	      float var_a=B[a]/0.899;
	      float var_b=B[a+3]/0.666;
	    }

    return 0;
}