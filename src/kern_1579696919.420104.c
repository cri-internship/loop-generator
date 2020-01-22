#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(810, 460, 890, "zeros");
	float *A = create_one_dim_float(780, "zeros");
	float **B = create_two_dim_float(880, 840, "zeros");

	for (int a = 5; a < 779; a++)
	{
	  
	    A[a]=A[a-5]+0.872;
	  
	    float  var_a=A[a]*0.012;
	  
	    B[a][a]=B[a-3][a-2]-0.762;
	  
	    A[a]=0.017;
	  
	    float var_b=C[a][a][a]-0.867;
	    float var_c=C[a-1][a-2][a-2]+0.397;
	  
	    A[a]=B[a][a]/0.049;
	    B[a][a]=B[a+5][a+5]/A[a]+A[a];
	  
	    float var_d=B[a][a]-0.031;
	    float var_e=B[a+4][a+4]-0.989;
	}

    return 0;
}