#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(520, 250, "random");
	float ***D = create_three_dim_float(970, 730, 970, "random");
	float ***E = create_three_dim_float(580, 130, 740, "random");
	float **A = create_two_dim_float(440, 220, "random");
	float ***C = create_three_dim_float(30, 20, 910, "random");

	for (int a = 4; a < 436; a++)
	{
	  
	    A[a][a]=A[a+1][a+4]*0.701;
	  
	    D[a][a][a]=D[a+2][a+4][a+4]+0.204;
	  
	    float var_a=D[a][a][a]+0.296;
	    float var_b=D[a+2][a+1][a+5]+0.247;
	  
	    A[a][a]=A[a][a]*B[a][a];
	    D[a][a][a]=A[a+4][a+3]+D[a][a][a]-0.67;
	  
	    float var_c=E[a][a][a]-0.983;
	    float var_d=E[a][a-3][a-4]+0.461;
	}

    return 0;
}