#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(990, "ones");
	float *A = create_one_dim_float(720, "ones");

	for (int c = 1; c < 719; c++)
	  for (int b = 1; b < 719; b++)
	    for (int a = 1; a < 719; a++)
	    {
	      
	      A[a]=A[a+1]*0.3;
	      
	      B[a]=B[a+4]-0.235;
	      
	      float var_a=B[a]-0.071;
	      float var_b=B[a+3]-0.602;
	      
	      float var_c=A[a]/0.748;
	      float var_d=A[a-1]*0.634;
	      
	      float var_e=A[a]*0.266;
	    }

    return 0;
}