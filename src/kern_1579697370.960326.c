#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(50, "random");
	float *A = create_one_dim_float(380, "random");

	for (int c = 5; c < 50; c++)
	  for (int b = 5; b < 50; b++)
	    for (int a = 5; a < 50; a++)
	    {
	      
	      B[a]=B[a-4]*0.893;
	      
	      float var_a=A[a]-0.88;
	      A[a]=0.81;
	      
	      A[a]=A[a+1]-0.44;
	      
	      B[a]=0.771;
	      
	      float var_b=B[a]*0.037;
	      float var_c=B[a]+0.742;
	      
	      B[a]=A[a]/B[a];
	      A[a]=A[a-3]*B[a];
	      
	      A[a]=A[a]*B[a];
	      B[a]=A[a+5]/B[a];
	    }

    return 0;
}