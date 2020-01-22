#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(170, "zeros");
	float *A = create_one_dim_float(320, "zeros");
	float **B = create_two_dim_float(60, 310, "zeros");

	for (int b = 5; b < 170; b++)
	  for (int a = 5; a < 170; a++)
	  {
	    
	     C[a]=C[a-4]-A[a]+B[a][b];
	    
	     C[a]=C[a-5]-0.703;
	    
	     A[a]=A[a-2]*C[a]/0.352;
	  }

    return 0;
}