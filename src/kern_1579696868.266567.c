#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(780, 900, 540, "random");
	float *E = create_one_dim_float(470, "random");
	float **B = create_two_dim_float(970, 760, "random");
	float **D = create_two_dim_float(10, 70, "random");
	float **A = create_two_dim_float(930, 630, "random");

	for (int a = 5; a < 5; a++)
	{
	  
	    C[a][a][a]=C[a-4][a-2][a-1]/0.173;
	  
	    D[a][a]=A[a][a]-C[a][a][a]/B[a][a];
	    D[a+5][a+1]=E[a]/A[a][a]*B[a][a];
	  
	    float var_a=C[a][a][a]/0.764;
	    float var_b=C[a-3][a-4][a]*0.724;
	  
	    E[a]=C[a][a][a]-D[a][a]+A[a][a];
	    B[a][a]=C[a-5][a-3][a-2]+E[a]-D[a][a]*B[a][a]/A[a][a];
	}

    return 0;
}