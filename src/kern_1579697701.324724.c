#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(330, "random");
	float *A = create_one_dim_float(420, "random");
	float **B = create_two_dim_float(400, 300, "random");
	float *C = create_one_dim_float(530, "random");

	for (int b = 3; b < 300; b++)
	  for (int a = 5; a < 400; a++)
	  {
	    
	     A[a]=A[a-3]*0.998;
	    
	     A[a]=A[a+3]-C[a];
	    
	     float var_a=C[a]*0.083;
	     float var_b=C[a-5]+0.065;
	    
	     D[a]=B[a][b]-D[a]*A[a]+C[a];
	     A[a]=B[a-5][b-3]-A[a];
	  }

    return 0;
}