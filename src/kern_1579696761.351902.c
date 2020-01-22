#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(170, 410, "random");
	float *A = create_one_dim_float(380, "random");
	float **C = create_two_dim_float(20, 180, "random");

	for (int b = 4; b < 408; b++)
	  for (int a = 4; a < 166; a++)
	  {
	    
	     A[a]=A[a-1]/0.095;
	    
	     B[a][b]=0.961;
	     B[a-4][b-4]=0.904;
	    
	     A[a]=B[a][b]-C[a][b];
	    
	     float var_a=B[a][b]+0.991;
	     float var_b=B[a+4][b+2]/0.293;
	  }

    return 0;
}