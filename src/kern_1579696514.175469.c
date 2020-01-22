#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(910, "zeros");
	float *B = create_one_dim_float(530, "zeros");
	float **A = create_two_dim_float(970, 930, "zeros");
	float **D = create_two_dim_float(600, 120, "zeros");

	for (int b = 2; b < 930; b++)
	  for (int a = 3; a < 526; a++)
	  {
	    
	     B[a]=B[a-1]+C[a]*A[a][b];
	    
	     A[a][b]=A[a-1][b-2]+0.808;
	    
	     B[a]=B[a+1]+D[a][b];
	    
	     B[a]=B[a+4]-0.987;
	    
	     C[a]=C[a+1]-B[a]/B[a];
	    
	     C[a]=0.456;
	    
	     float var_a=B[a]/0.186;
	     float var_b=B[a-3]/0.468;
	  }

    return 0;
}