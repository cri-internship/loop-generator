#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(640, "random");
	float *D = create_one_dim_float(290, "random");
	float *B = create_one_dim_float(740, "random");
	float **A = create_two_dim_float(730, 860, "random");

	for (int b = 4; b < 859; b++)
	  for (int a = 5; a < 290; a++)
	  {
	    
	     D[a]=0.201;
	     float  var_a=D[a]+0.558;
	    
	     A[a][b]=A[a-2][b-4]*0.874;
	    
	     D[a]=D[a-5]*A[a][b]/B[a];
	    
	     A[a][b]=A[a][b+1]/0.812;
	    
	     C[a]=C[a+1]*0.947+A[a][b];
	    
	     B[a]=0.798;
	     B[a]=0.501;
	  }

    return 0;
}