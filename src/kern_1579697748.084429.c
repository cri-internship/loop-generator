#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(610, "random");
	float **B = create_two_dim_float(880, 440, "random");
	float *C = create_one_dim_float(130, "random");

	for (int c = 0; c < 128; c++)
	  for (int b = 0; b < 128; b++)
	    for (int a = 0; a < 128; a++)
	    {
	      
	      C[a]=C[a+2]*0.847;
	    }

    return 0;
}