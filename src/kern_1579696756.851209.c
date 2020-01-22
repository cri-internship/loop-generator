#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(560, "zeros");
	float **B = create_two_dim_float(160, 850, "zeros");
	float **D = create_two_dim_float(970, 910, "zeros");
	float **A = create_two_dim_float(900, 260, "zeros");

	for (int b = 4; b < 256; b++)
	  for (int a = 2; a < 160; a++)
	  {
	    
	     D[a][b]=D[a+1][b+1]+C[a]-B[a][b]/A[a][b];
	    
	     C[a]=C[a+3]*0.245;
	    
	     C[a]=C[a+2]*0.36;
	    
	     D[a][b]=B[a][b];
	    
	     float var_a=A[a][b]-0.372;
	     float var_b=A[a+3][b+4]-0.672;
	    
	     float var_c=B[a][b]/0.264;
	     float var_d=B[a-2][b-4]-0.796;
	  }

    return 0;
}