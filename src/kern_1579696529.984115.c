#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(380, "ones");
	float *B = create_one_dim_float(810, "ones");

	for (int c = 5; c < 376; c++)
	  for (int b = 5; b < 376; b++)
	    for (int a = 5; a < 376; a++)
	    {
	      
	      B[a]=B[a-4]*0.085;
	      
	      A[a]=A[a+4]+B[a];
	      
	      B[a]=0.993;
	      
	      A[a]=0.219;
	      
	      B[a]=B[a]+A[a];
	      A[a]=B[a+5]/A[a];
	    }

    return 0;
}