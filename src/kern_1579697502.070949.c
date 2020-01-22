#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(160, "ones");
	float *A = create_one_dim_float(370, "ones");

	for (int c = 3; c < 159; c++)
	  for (int b = 3; b < 159; b++)
	    for (int a = 3; a < 159; a++)
	    {
	      
	      A[a]=A[a+1]*B[a];
	      
	      A[a]=A[a+5]/B[a];
	      
	      float var_a=B[a]/0.499;
	      float var_b=B[a-3]-0.505;
	      
	      float var_c=A[a]/0.988;
	      float var_d=A[a+3]-0.897;
	      
	      B[a]=B[a]*0.942;
	      A[a]=B[a+1]/A[a];
	    }

    return 0;
}