#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(670, "random");
	float *A = create_one_dim_float(520, "random");
	float *D = create_one_dim_float(730, "random");
	float *C = create_one_dim_float(430, "random");

	for (int c = 5; c < 430; c++)
	  for (int b = 5; b < 430; b++)
	    for (int a = 5; a < 430; a++)
	    {
	      
	      D[a]=0.573;
	      float  var_a=D[a]+0.922;
	      
	      A[a]=A[a-5]-0.805;
	      
	      float var_b=C[a]+0.911;
	      C[a]=0.744;
	      
	      B[a]=B[a+3]*0.761;
	    }

    return 0;
}