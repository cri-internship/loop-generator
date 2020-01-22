#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(120, "random");
	float *A = create_one_dim_float(170, "random");
	float *C = create_one_dim_float(640, "random");
	float *B = create_one_dim_float(610, "random");

	for (int c = 2; c < 120; c++)
	  for (int b = 2; b < 120; b++)
	    for (int a = 2; a < 120; a++)
	    {
	      
	      D[a]=0.007;
	      float  var_a=D[a]*0.476;
	      
	      B[a]=B[a+5]/0.06;
	      
	      C[a]=D[a];
	      C[a+4]=A[a]*B[a]-A[a];
	      
	      float var_b=D[a]+0.758;
	      float var_c=D[a-2]/0.406;
	    }

    return 0;
}