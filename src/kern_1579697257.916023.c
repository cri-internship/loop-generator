#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(930, "ones");
	float *A = create_one_dim_float(880, "ones");
	float *D = create_one_dim_float(440, "ones");
	float *C = create_one_dim_float(650, "ones");

	for (int b = 3; b < 650; b++)
	  for (int a = 3; a < 650; a++)
	  {
	    
	     A[a]=A[a+1]-0.591;
	    
	     A[a]=C[a]/B[a];
	    
	     D[a]=C[a]/A[a];
	     C[a]=C[a-3]*D[a];
	  }

    return 0;
}