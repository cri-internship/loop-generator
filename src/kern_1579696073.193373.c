#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(120, "random");
	float *A = create_one_dim_float(140, "random");
	float *C = create_one_dim_float(460, "random");

	for (int c = 5; c < 118; c++)
	  for (int b = 5; b < 118; b++)
	    for (int a = 5; a < 118; a++)
	    {
	      
	      C[a]=C[a-5]*0.487;
	      
	      B[a]=B[a+2]-0.795;
	      
	      A[a]=A[a+3]/C[a]*B[a];
	      
	      C[a]=C[a+2]-0.249;
	      
	      B[a]=0.05;
	      
	      B[a]=A[a]-B[a];
	      C[a]=A[a+4]+0.54;
	    }

    return 0;
}