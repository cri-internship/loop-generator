#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(590, "random");
	float *A = create_one_dim_float(380, "random");
	float *C = create_one_dim_float(270, "random");

	for (int b = 0; b < 269; b++)
	  for (int a = 0; a < 269; a++)
	  {
	    
	     C[a]=C[a+1]-0.038;
	    
	     B[a]=0.898;
	     B[a+3]=0.203;
	  }

    return 0;
}