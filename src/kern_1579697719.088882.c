#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(20, 880, "random");
	float **B = create_two_dim_float(440, 580, "random");
	float *C = create_one_dim_float(300, "random");

	for (int b = 2; b < 577; b++)
	  for (int a = 5; a < 20; a++)
	  {
	    
	     B[a][b]=B[a-5][b-2]+A[a][b];
	    
	     A[a][b]=A[a-1][b-1]+0.309;
	    
	     A[a][b]=A[a-5][b-2]/B[a][b]+B[a][b];
	    
	     C[a]=C[a+4]-0.807;
	    
	     B[a][b]=B[a+4][b+3]*0.287;
	    
	     B[a][b]=B[a+5][b+3]+A[a][b]*C[a];
	    
	     float var_a=C[a]/0.049;
	     float var_b=C[a-2]+0.338;
	  }

    return 0;
}