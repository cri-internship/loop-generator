#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(580, "random");
	float *A = create_one_dim_float(110, "random");

	for (int c = 3; c < 110; c++)
	  for (int b = 3; b < 110; b++)
	    for (int a = 3; a < 110; a++)
	    {
	      
	      B[a]=B[a-3]*0.901;
	      
	      A[a]=0.385;
	      float  var_a=A[a]/0.387;
	      
	      A[a]=0.543;
	      
	      A[a]=A[a]-B[a];
	      B[a]=A[a-1]-B[a];
	      
	      float var_b=B[a]+0.751;
	      float var_c=B[a+3]/0.683;
	      
	      float var_d=B[a]+0.761;
	      float var_e=B[a+1]+0.231;
	    }

    return 0;
}