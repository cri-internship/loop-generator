#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(760, 450, "zeros");
	float *A = create_one_dim_float(710, "zeros");
	float **D = create_two_dim_float(880, 90, "zeros");
	float *C = create_one_dim_float(430, "zeros");

	for (int b = 0; b < 86; b++)
	  for (int a = 0; a < 430; a++)
	  {
	    
	     D[a][b]=D[a][b+4]/0.016;
	    
	     float var_a=A[a]+0.642;
	     float var_b=A[a]*0.983;
	    
	     B[a][b]=C[a]/A[a]-0.993;
	     A[a]=C[a]*D[a][b]/D[a][b];
	  }

    return 0;
}