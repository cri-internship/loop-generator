#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(530, 730, "random");
	float *B = create_one_dim_float(990, "random");
	float *A = create_one_dim_float(940, "random");
	float ***D = create_three_dim_float(360, 500, 210, "random");

	for (int b = 0; b < 726; b++)
	  for (int a = 2; a < 530; a++)
	  {
	    
	     B[a]=B[a-2]*0.402;
	    
	     A[a]=A[a+4]*0.25;
	    
	     B[a]=B[a+3]+0.127;
	    
	     A[a]=0.484;
	    
	     D[a][b][a]=C[a][b]+0.311;
	     B[a]=C[a][b+4]-B[a]+A[a]*0.23;
	    
	     float var_a=B[a]+0.441;
	     float var_b=B[a+2]*0.905;
	  }

    return 0;
}