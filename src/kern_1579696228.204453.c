#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(280, "ones");
	float *A = create_one_dim_float(240, "ones");

	for (int c = 5; c < 235; c++)
	  for (int b = 5; b < 235; b++)
	    for (int a = 5; a < 235; a++)
	    {
	      
	      A[a]=A[a-5]+0.281;
	      
	      B[a]=B[a+4]/A[a];
	      
	      A[a]=A[a+1]+B[a];
	      
	      A[a]=A[a+3]-0.73;
	      
	      B[a]=B[a+5]*0.913;
	      
	      float var_a=A[a]+0.52;
	      float var_b=A[a+5]-0.59;
	    }

    return 0;
}