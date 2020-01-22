#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(830, "ones");
	float *B = create_one_dim_float(390, "ones");
	float ***A = create_three_dim_float(600, 340, 170, "ones");
	float ***D = create_three_dim_float(150, 1000, 860, "ones");
	float *C = create_one_dim_float(160, "ones");

	for (int a = 3; a < 145; a++)
	{
	  
	    D[a][a][a]=D[a-3][a-3][a]*0.135;
	  
	    D[a][a][a]=D[a+4][a+1][a+5]/0.999-C[a];
	  
	    D[a][a][a]=D[a+2][a+5][a+2]-E[a]*A[a][a][a];
	  
	    B[a]=B[a+2]+0.512;
	  
	    E[a]=E[a+4]+D[a][a][a]*D[a][a][a];
	  
	    B[a]=0.619;
	  
	    E[a]=A[a][a][a]-C[a];
	}

    return 0;
}