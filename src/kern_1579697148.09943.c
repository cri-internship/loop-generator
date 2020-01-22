#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(1000, "ones");
	float *A = create_one_dim_float(930, "ones");

	for (int c = 4; c < 925; c++)
	  for (int b = 4; b < 925; b++)
	    for (int a = 4; a < 925; a++)
	    {
	      
	      A[a]=B[a]-A[a];
	      B[a]=A[a];
	      
	      A[a]=A[a+5]/0.813;
	      
	      B[a]=0.344;
	      
	      float var_b=A[a]*0.273;
	      float var_c=A[a+3]+0.527;
	      
	      float var_d=B[a]/0.004;
	      float var_e=B[a+4]/0.955;
	      
	      float var_f=B[a]*0.629;
	      float var_g=B[a-2]-0.202;
	    }

    return 0;
}