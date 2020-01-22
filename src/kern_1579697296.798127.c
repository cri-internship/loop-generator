#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(290, "random");
	float *D = create_one_dim_float(240, "random");
	float *E = create_one_dim_float(1000, "random");
	float **B = create_two_dim_float(950, 620, "random");
	float *C = create_one_dim_float(260, "random");

	for (int c = 1; c < 240; c++)
	  for (int b = 1; b < 240; b++)
	    for (int a = 1; a < 240; a++)
	    {
	      
	      D[a]=0.645;
	      float  var_a=D[a]-0.376;
	      
	      float var_b=C[a]-0.204;
	      C[a]=0.883;
	      
	      float var_c=C[a]-0.637;
	      float var_d=C[a-1]/0.327;
	    }

    return 0;
}