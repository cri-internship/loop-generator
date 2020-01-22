#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(80, "random");
	float ***A = create_three_dim_float(1000, 520, 880, "random");
	float **B = create_two_dim_float(330, 960, "random");
	float ***C = create_three_dim_float(170, 180, 430, "random");
	float ***D = create_three_dim_float(170, 440, 860, "random");

	for (int a = 5; a < 79; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-4][a-2]-C[a][a][a]+E[a];
	  
	    B[a][a]=B[a+4][a]-0.296;
	  
	    E[a]=D[a][a][a]-B[a][a]/A[a][a][a]*C[a][a][a];
	    E[a-5]=B[a][a]-C[a][a][a]*D[a][a][a]/A[a][a][a];
	  
	    D[a][a][a]=C[a][a][a]*0.578-A[a][a][a]/B[a][a];
	    D[a+5][a+3][a+5]=B[a][a];
	  
	    A[a][a][a]=0.216;
	  
	    float var_a=E[a]/0.951;
	    float var_b=E[a+1]-0.097;
	  
	    float var_c=A[a][a][a]+0.352;
	    float var_d=A[a+2][a+4][a]*0.7;
	}

    return 0;
}