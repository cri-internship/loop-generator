#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(400, "random");
	float **B = create_two_dim_float(490, 440, "random");
	float **D = create_two_dim_float(680, 180, "random");
	float ***E = create_three_dim_float(80, 40, 90, "random");
	float *A = create_one_dim_float(870, "random");

	for (int a = 4; a < 400; a++)
	{
	  
	    C[a]=C[a-4]/B[a][a];
	  
	    D[a][a]=D[a+1][a+3]*A[a]/E[a][a][a]-C[a]+C[a];
	  
	    B[a][a]=A[a]-D[a][a]/B[a][a];
	    A[a]=B[a][a]-0.533;
	  
	    C[a]=0.663;
	  
	    B[a][a]=E[a][a][a];
	  
	    D[a][a]=E[a][a][a];
	  
	    float var_a=D[a][a]-0.289;
	    float var_b=D[a+1][a+5]-0.854;
	}

    return 0;
}