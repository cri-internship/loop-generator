#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(860, "zeros");
	float *A = create_one_dim_float(590, "zeros");
	float **B = create_two_dim_float(240, 270, "zeros");

	for (int b = 5; b < 267; b++)
	  for (int a = 1; a < 238; a++)
	  {
	    
	     C[a]=C[a+1]*0.259;
	    
	     B[a][b]=B[a+2][b+3]*0.854-C[a];
	    
	     C[a]=0.506;
	    
	     C[a]=A[a]-B[a][b]*0.992;
	     B[a][b]=A[a+2]*C[a]-B[a][b];
	    
	     float var_a=B[a][b]-0.236;
	     float var_b=B[a-1][b-5]*0.112;
	    
	     A[a]=B[a][b]-C[a];
	     A[a]=B[a][b-2]+A[a]*C[a];
	  }

    return 0;
}