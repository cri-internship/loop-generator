#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(470, 740, 840, "random");
	float *D = create_one_dim_float(900, "random");
	float *B = create_one_dim_float(100, "random");
	float ***A = create_three_dim_float(470, 550, 370, "random");
	float ***C = create_three_dim_float(1000, 980, 780, "random");

	for (int a = 5; a < 470; a++)
	{
	  
	    C[a][a][a]=C[a+5][a][a+5]*E[a][a][a]/D[a];
	  
	    D[a]=D[a+5]*0.038;
	  
	    D[a]=B[a]*A[a][a][a]-C[a][a][a]+B[a];
	  
	    D[a]=D[a]+E[a][a][a]*A[a][a][a];
	    B[a]=D[a-1]+E[a][a][a]/A[a][a][a]-B[a]*C[a][a][a];
	  
	    float var_a=A[a][a][a]-0.73;
	    float var_b=A[a][a-5][a-2]-0.545;
	}

    return 0;
}