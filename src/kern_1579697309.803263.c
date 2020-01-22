#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(350, 610, "ones");
	float **A = create_two_dim_float(950, 100, "ones");
	float *B = create_one_dim_float(980, "ones");
	float ***D = create_three_dim_float(330, 240, 410, "ones");

	for (int a = 5; a < 326; a++)
	{
	  
	    D[a][a][a]=D[a-4][a-3][a-5]*B[a]/C[a][a];
	  
	    D[a][a][a]=D[a+2][a+1][a+4]+0.126;
	  
	    A[a][a]=0.969;
	    A[a-3][a-3]=0.333;
	  
	    float var_a=C[a][a]+0.079;
	    float var_b=C[a-5][a-1]/0.179;
	  
	    float var_c=D[a][a][a]+0.275;
	    float var_d=D[a-3][a-3][a-4]+0.552;
	  
	    float var_e=D[a][a][a]*0.42;
	    float var_f=D[a+1][a+3][a+2]+0.69;
	  
	    float var_g=B[a]/0.155;
	    float var_h=B[a-2]*0.548;
	}

    return 0;
}