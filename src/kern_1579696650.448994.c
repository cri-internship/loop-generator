#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(140, "random");
	float ***D = create_three_dim_float(640, 280, 50, "random");
	float **A = create_two_dim_float(840, 880, "random");
	float **C = create_two_dim_float(210, 90, "random");

	for (int b = 0; b < 138; b++)
	  for (int a = 0; a < 138; a++)
	  {
	    
	     B[a]=B[a+2]*0.711;
	  }

    return 0;
}