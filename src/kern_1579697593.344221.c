#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(500, "ones");
	float ***B = create_three_dim_float(810, 430, 330, "ones");
	float *E = create_one_dim_float(550, "ones");
	float *C = create_one_dim_float(630, "ones");
	float *A = create_one_dim_float(770, "ones");

	for (int a = 5; a < 545; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-5][a-2]/D[a]*A[a];
	  
	    C[a]=E[a]/B[a][a][a]-C[a]+A[a]*D[a];
	    E[a]=0.96;
	  
	    float var_a=E[a]-0.725;
	    float var_b=E[a+5]/0.82;
	  
	    D[a]=E[a]*D[a]/A[a]-C[a];
	    A[a]=E[a-1]*C[a]-B[a][a][a]/D[a]+A[a];
	}

    return 0;
}