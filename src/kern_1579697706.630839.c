#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(220, 470, 480, "random");
	float **D = create_two_dim_float(780, 650, "random");
	float **B = create_two_dim_float(120, 580, "random");
	float ***C = create_three_dim_float(570, 280, 810, "random");

	for (int a = 4; a < 117; a++)
	{
	  
	    C[a][a][a]=C[a][a][a-4]/D[a][a];
	  
	    C[a][a][a]=A[a][a][a]-B[a][a]/0.88;
	  
	    A[a][a][a]=A[a][a][a]*C[a][a][a];
	    C[a][a][a]=A[a+1][a+5][a+3]+B[a][a]/0.956*C[a][a][a];
	  
	    float var_a=B[a][a]*0.943;
	    float var_b=B[a+1][a+3]*0.555;
	}

    return 0;
}