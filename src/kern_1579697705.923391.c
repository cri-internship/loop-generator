#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(170, 460, "random");
	float *C = create_one_dim_float(860, "random");
	float *B = create_one_dim_float(230, "random");

	for (int b = 5; b < 460; b++)
	  for (int a = 4; a < 170; a++)
	  {
	    
	     C[a]=C[a-1]-0.003;
	    
	     B[a]=B[a-2]+0.329;
	    
	     C[a]=C[a+1]/0.376;
	    
	     A[a][b]=0.47/C[a];
	     A[a-4][b-5]=B[a]*C[a];
	    
	     float var_a=C[a]/0.194;
	     float var_b=C[a-4]*0.616;
	    
	     C[a]=B[a]+A[a][b];
	  }

    return 0;
}