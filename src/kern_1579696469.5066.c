#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(880, "zeros");
	float *B = create_one_dim_float(530, "zeros");

	for (int b = 5; b < 526; b++)
	  for (int a = 5; a < 526; a++)
	  {
	    
	     A[a]=B[a];
	     B[a]=A[a]*B[a];
	    
	     B[a]=B[a+4]*A[a];
	    
	     A[a]=A[a+5]*0.284;
	    
	     float var_a=A[a]+0.756;
	     float var_b=A[a-5]-0.227;
	  }

    return 0;
}