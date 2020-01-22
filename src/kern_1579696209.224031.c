#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(610, "ones");
	float **A = create_two_dim_float(790, 650, "ones");
	float ***C = create_three_dim_float(280, 770, 880, "ones");
	float *B = create_one_dim_float(230, "ones");
	float **D = create_two_dim_float(970, 150, "ones");

	for (int a = 5; a < 230; a++)
	{
	  
	    float var_a=B[a]+0.667;
	    B[a]=0.133;
	  
	    E[a]=C[a][a][a];
	    E[a-1]=A[a][a];
	  
	    float var_b=E[a]*0.091;
	    float var_c=E[a-4]+0.956;
	  
	    C[a][a][a]=A[a][a]/D[a][a]-B[a]+E[a];
	    E[a]=A[a-1][a-5]-B[a]/E[a]+C[a][a][a];
	  
	    B[a]=D[a][a]-A[a][a];
	    A[a][a]=D[a-3][a-4]*C[a][a][a]-0.851;
	}

    return 0;
}