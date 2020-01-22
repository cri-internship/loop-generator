#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(420, "ones");
	float *A = create_one_dim_float(210, "ones");
	float **B = create_two_dim_float(810, 830, "ones");
	float ***D = create_three_dim_float(410, 910, 330, "ones");

	for (int b = 3; b < 826; b++)
	  for (int a = 5; a < 409; a++)
	  {
	    
	     B[a][b]=B[a-2][b-3]*0.979;
	    
	     D[a][b][a]=D[a][b+2][a+1]-0.487;
	    
	     B[a][b]=B[a+2][b+1]/A[a]*D[a][b][a]+C[a];
	    
	     C[a]=C[a+2]+B[a][b]/B[a][b];
	    
	     float var_a=C[a]-0.988;
	     float var_b=C[a-5]-0.247;
	    
	     float var_c=B[a][b]*0.4;
	     float var_d=B[a][b+4]+0.572;
	  }

    return 0;
}