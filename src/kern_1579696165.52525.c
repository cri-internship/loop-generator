#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(790, 690, "zeros");
	float **E = create_two_dim_float(210, 570, "zeros");
	float ***A = create_three_dim_float(370, 280, 150, "zeros");
	float ***C = create_three_dim_float(90, 500, 780, "zeros");
	float **D = create_two_dim_float(930, 970, "zeros");

	for (int a = 4; a < 87; a++)
	{
	  
	    D[a][a]=D[a+4][a+3]/0.586;
	  
	    B[a][a]=B[a+1][a+4]-0.37;
	  
	    E[a][a]=C[a][a][a]+D[a][a]-A[a][a][a];
	    B[a][a]=C[a+2][a+3][a+2]*0.252/E[a][a]+A[a][a][a];
	  
	    float var_a=B[a][a]+0.722;
	    float var_b=B[a-4][a-1]*0.797;
	  
	    float var_c=B[a][a]*0.319;
	    float var_d=B[a-3][a]-0.666;
	}

    return 0;
}