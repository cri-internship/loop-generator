#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(110, "random");
	float **B = create_two_dim_float(860, 480, "random");
	float **C = create_two_dim_float(410, 840, "random");

	for (int b = 4; b < 480; b++)
	  for (int a = 3; a < 107; a++)
	  {
	    
	     B[a][b]=B[a-1][b-2]/0.841;
	    
	     A[a]=A[a+3]+0.007;
	    
	     A[a]=A[a+1]+0.948;
	    
	     A[a]=C[a][b]+0.792;
	     B[a][b]=C[a+2][b+3]-A[a];
	    
	     float var_a=B[a][b]*0.71;
	     float var_b=B[a-2][b-4]+0.149;
	    
	     C[a][b]=A[a]+0.563;
	    
	     float var_c=C[a][b]*0.406;
	     float var_d=C[a-3][b-1]-0.947;
	  }

    return 0;
}