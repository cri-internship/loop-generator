#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(610, "zeros");
	float *A = create_one_dim_float(610, "zeros");

	for (int c = 4; c < 608; c++)
	  for (int b = 4; b < 608; b++)
	    for (int a = 4; a < 608; a++)
	    {
	      
	      B[a]=0.011;
	      B[a-2]=0.164;
	      
	      B[a]=0.123;
	      
	      float var_a=B[a]*0.203;
	      float var_b=B[a+2]/0.12;
	      
	      A[a]=B[a]*A[a];
	      B[a]=B[a-4]*0.09;
	    }

    return 0;
}