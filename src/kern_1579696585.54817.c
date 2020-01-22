#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(920, "random");
	float **B = create_two_dim_float(810, 440, "random");

	for (int b = 3; b < 919; b++)
	  for (int a = 3; a < 919; a++)
	  {
	    
	     A[a]=A[a-3]*B[a][b];
	    
	     A[a]=A[a+1]/0.141;
	  }

    return 0;
}