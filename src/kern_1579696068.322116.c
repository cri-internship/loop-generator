#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(730, 100, "random");
	float *C = create_one_dim_float(520, "random");
	float *B = create_one_dim_float(240, "random");
	float *A = create_one_dim_float(720, "random");

	for (int b = 0; b < 99; b++)
	  for (int a = 1; a < 238; a++)
	  {
	    
	     B[a]=B[a-1]*A[a]-C[a];
	    
	     B[a]=B[a+2]*0.812;
	    
	     C[a]=C[a+4]*0.521;
	    
	     float var_a=D[a][b]-0.798;
	     float var_b=D[a+2][b+1]*0.136;
	    
	     float var_c=B[a]-0.192;
	     float var_d=B[a]*0.716;
	  }

    return 0;
}