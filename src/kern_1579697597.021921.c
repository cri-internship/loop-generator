#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(780, "zeros");
	float *B = create_one_dim_float(170, "zeros");

	for (int b = 0; b < 166; b++)
	  for (int a = 0; a < 166; a++)
	  {
	    
	     A[a]=A[a+2]+B[a];
	    
	     A[a]=B[a];
	    
	     A[a]=B[a]-0.87;
	     B[a]=B[a+4]+A[a];
	  }

    return 0;
}