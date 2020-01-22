#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(860, "zeros");
	float **D = create_two_dim_float(440, 560, "zeros");
	float **C = create_two_dim_float(340, 1000, "zeros");
	float *B = create_one_dim_float(750, "zeros");

	for (int b = 1; b < 560; b++)
	  for (int a = 5; a < 440; a++)
	  {
	    
	     D[a][b]=D[a-2][b-1]/C[a][b]-0.761*A[a];
	    
	     B[a]=D[a][b];
	     B[a-5]=A[a]/0.162*C[a][b];
	  }

    return 0;
}