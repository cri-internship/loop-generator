#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(20, "random");
	float *C = create_one_dim_float(190, "random");
	float **A = create_two_dim_float(380, 130, "random");

	for (int b = 2; b < 127; b++)
	  for (int a = 5; a < 17; a++)
	  {
	    
	     A[a][b]=0.097;
	     A[a+1][b+3]=0.911;
	    
	     B[a]=A[a][b];
	     B[a-3]=C[a];
	    
	     B[a]=C[a];
	    
	     A[a][b]=C[a]*0.261/A[a][b];
	     B[a]=C[a+2]*0.927;
	    
	     float var_a=A[a][b]*0.691;
	     float var_b=A[a-5][b-2]*0.194;
	  }

    return 0;
}