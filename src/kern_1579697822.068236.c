#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(50, "ones");
	float *E = create_one_dim_float(240, "ones");
	float *C = create_one_dim_float(430, "ones");
	float **B = create_two_dim_float(760, 710, "ones");
	float ***D = create_three_dim_float(830, 460, 60, "ones");

	for (int b = 5; b < 460; b++)
	  for (int a = 5; a < 430; a++)
	  {
	    
	     C[a]=C[a-3]/0.347;
	    
	     D[a][b][a]=C[a]+B[a][b]-E[a];
	     D[a-4][b-5][a-5]=A[a]+A[a];
	  }

    return 0;
}