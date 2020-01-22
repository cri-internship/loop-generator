#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(750, "zeros");
	float *A = create_one_dim_float(420, "zeros");
	float *C = create_one_dim_float(430, "zeros");

	for (int c = 4; c < 420; c++)
	  for (int b = 4; b < 420; b++)
	    for (int a = 4; a < 420; a++)
	    {
	      
	      C[a]=C[a-2]/A[a]*B[a];
	      
	      A[a]=0.736;
	      float  var_a=A[a]/0.39;
	      
	      C[a]=C[a-4]+B[a]*A[a];
	      
	      B[a]=C[a]-A[a];
	      B[a-4]=C[a];
	      
	      C[a]=B[a]*C[a]+A[a];
	      A[a]=B[a+1]/A[a]+C[a];
	    }

    return 0;
}