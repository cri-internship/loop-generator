#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(1000, "zeros");
	float ***C = create_three_dim_float(60, 400, 680, "zeros");
	float **D = create_two_dim_float(870, 770, "zeros");
	float ***B = create_three_dim_float(180, 680, 80, "zeros");
	float **A = create_two_dim_float(150, 580, "zeros");

	for (int a = 5; a < 60; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-3][a]/0.641;
	  
	    A[a][a]=A[a+5][a+5]+C[a][a][a]*B[a][a][a];
	  
	    B[a][a][a]=B[a+3][a+1][a+5]/D[a][a];
	  
	    A[a][a]=0.855;
	  
	    float var_a=B[a][a][a]+0.372;
	    float var_b=B[a+5][a+3][a]*0.338;
	  
	    C[a][a][a]=C[a][a][a]+E[a]-A[a][a]*0.487/D[a][a];
	    B[a][a][a]=C[a-5][a-2][a-2]-B[a][a][a];
	  
	    A[a][a]=C[a][a][a]+A[a][a];
	    E[a]=C[a-4][a-1][a-4]+A[a][a]-B[a][a][a];
	}

    return 0;
}