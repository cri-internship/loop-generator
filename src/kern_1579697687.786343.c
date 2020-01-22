#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(380, 350, "zeros");
	float *A = create_one_dim_float(1000, "zeros");
	float *C = create_one_dim_float(170, "zeros");

	for (int c = 5; c < 170; c++)
	  for (int b = 5; b < 170; b++)
	    for (int a = 5; a < 170; a++)
	    {
	      
	      C[a]=C[a-4]*0.578;
	      
	      A[a]=0.224;
	      A[a-5]=0.396;
	    }

    return 0;
}