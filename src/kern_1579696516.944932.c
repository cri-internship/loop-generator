#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(980, "random");
	float *C = create_one_dim_float(780, "random");
	float ***B = create_three_dim_float(100, 230, 140, "random");
	float **D = create_two_dim_float(120, 340, "random");

	for (int b = 0; b < 336; b++)
	  for (int a = 0; a < 117; a++)
	  {
	    
	     float var_a=D[a][b]/0.41;
	     float var_b=D[a+3][b+4]+0.963;
	  }

    return 0;
}