#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(410, 260, "random");
	float *B = create_one_dim_float(220, "random");

	for (int b = 1; b < 260; b++)
	  for (int a = 4; a < 218; a++)
	  {
	    
	     B[a]=B[a-4]+A[a][b];
	    
	     A[a][b]=A[a-4][b-1]+0.483;
	    
	     B[a]=0.298;
	    
	     float var_a=B[a]-0.483;
	     float var_b=B[a]-0.645;
	    
	     float var_c=B[a]+0.068;
	     float var_d=B[a+2]+0.192;
	  }

    return 0;
}