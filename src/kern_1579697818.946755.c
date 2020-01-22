#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(120, 920, 760, "ones");
	float **C = create_two_dim_float(440, 800, "ones");
	float *D = create_one_dim_float(40, "ones");
	float **A = create_two_dim_float(860, 180, "ones");

	for (int c = 3; c < 40; c++)
	  for (int b = 3; b < 40; b++)
	    for (int a = 3; a < 40; a++)
	    {
	      
	      float var_a=D[a]-0.043;
	      float var_b=D[a-3]/0.772;
	    }

    return 0;
}