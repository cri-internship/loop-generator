#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(690, "random");
	float *C = create_one_dim_float(200, "random");
	float *B = create_one_dim_float(750, "random");

	for (int c = 0; c < 197; c++)
	  for (int b = 0; b < 197; b++)
	    for (int a = 0; a < 197; a++)
	    {
	      
	      C[a]=B[a];
	      C[a+3]=A[a];
	      
	      A[a]=0.772;
	      A[a]=0.105;
	      
	      B[a]=0.199;
	      B[a]=0.247;
	    }

    return 0;
}