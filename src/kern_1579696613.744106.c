#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(320, "ones");
	float *C = create_one_dim_float(260, "ones");
	float *A = create_one_dim_float(390, "ones");

	for (int b = 3; b < 258; b++)
	  for (int a = 3; a < 258; a++)
	  {
	    
	     A[a]=A[a-2]*0.909;
	    
	     C[a]=C[a-3]*A[a]/B[a];
	    
	     A[a]=A[a+3]+C[a]/B[a];
	    
	     C[a]=C[a+2]-0.498;
	    
	     B[a]=B[a+4]+0.547;
	  }

    return 0;
}