#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(290, "zeros");
	float *C = create_one_dim_float(220, "zeros");
	float *A = create_one_dim_float(450, "zeros");

	for (int b = 5; b < 218; b++)
	  for (int a = 5; a < 218; a++)
	  {
	    
	     A[a]=A[a-5]/C[a];
	    
	     C[a]=C[a+2]+A[a]*B[a];
	  }

    return 0;
}