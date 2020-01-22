#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(410, "ones");
	float *C = create_one_dim_float(840, "ones");
	float *A = create_one_dim_float(980, "ones");

	for (int c = 5; c < 410; c++)
	  for (int b = 5; b < 410; b++)
	    for (int a = 5; a < 410; a++)
	    {
	      
	      float var_a=A[a]-0.272;
	      float var_b=A[a]+0.085;
	      
	      float var_c=B[a]-0.711;
	      float var_d=B[a-5]-0.981;
	    }

    return 0;
}