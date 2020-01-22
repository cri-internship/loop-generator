#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(150, 200, 70, "random");
	float ***D = create_three_dim_float(430, 550, 150, "random");
	float *B = create_one_dim_float(360, "random");
	float ***E = create_three_dim_float(90, 730, 420, "random");
	float **A = create_two_dim_float(640, 740, "random");

	for (int a = 5; a < 150; a++)
	{
	  
	    A[a][a]=A[a-1][a]-0.436;
	  
	    C[a][a][a]=C[a-3][a-1][a]-A[a][a]+D[a][a][a]*B[a]/E[a][a][a];
	  
	    A[a][a]=A[a+2][a+3]+0.165;
	  
	    B[a]=0.323;
	    B[a]=0.513;
	  
	    float var_a=D[a][a][a]+0.814;
	    float var_b=D[a+4][a+5][a+2]+0.667;
	  
	    B[a]=B[a]*C[a][a][a]/D[a][a][a]-A[a][a];
	    A[a][a]=B[a-5]/D[a][a][a];
	  
	    float var_c=D[a][a][a]*0.13;
	    float var_d=D[a][a+5][a+4]/0.294;
	}

    return 0;
}