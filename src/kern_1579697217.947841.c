#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(550, "ones");
	float ***C = create_three_dim_float(480, 910, 810, "ones");
	float **A = create_two_dim_float(700, 50, "ones");
	float *D = create_one_dim_float(110, "ones");

	for (int a = 5; a < 110; a++)
	{
	  
	    D[a]=0.985;
	    float  var_a=D[a]/0.72;
	  
	    A[a][a]=A[a-4][a-2]*0.03;
	  
	    C[a][a][a]=C[a+3][a+5][a+5]+0.468;
	  
	    B[a]=B[a+4]+0.692;
	  
	    C[a][a][a]=C[a+3][a+4][a]+D[a]*B[a];
	  
	    B[a]=D[a]+C[a][a][a]/A[a][a]-A[a][a];
	    D[a]=D[a-5]-B[a]*0.992+A[a][a];
	  
	    float var_b=C[a][a][a]*0.535;
	    float var_c=C[a+1][a+2][a+5]/0.882;
	}

    return 0;
}