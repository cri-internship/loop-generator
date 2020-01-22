#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(70, 720, 660, "random");
	float **D = create_two_dim_float(320, 430, "random");
	float ***C = create_three_dim_float(320, 720, 370, "random");
	float **A = create_two_dim_float(50, 750, "random");

	for (int a = 5; a < 45; a++)
	{
	  
	    D[a][a]=D[a-5][a-3]+0.179;
	  
	    A[a][a]=A[a+5][a]/D[a][a]*C[a][a][a]+B[a][a][a];
	  
	    B[a][a][a]=B[a+3][a+3][a+3]-A[a][a]+C[a][a][a];
	  
	    D[a][a]=0.661;
	  
	    float var_a=A[a][a]+0.841;
	}

    return 0;
}