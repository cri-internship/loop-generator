#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(400, "ones");
	float *A = create_one_dim_float(510, "ones");
	float **B = create_two_dim_float(40, 90, "ones");

	for (int b = 0; b < 400; b++)
	  for (int a = 0; a < 400; a++)
	  {
	    
	     C[a]=A[a]+B[a][b];
	     C[a]=A[a]-B[a][b];
	  }

    return 0;
}