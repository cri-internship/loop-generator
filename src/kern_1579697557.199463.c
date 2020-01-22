#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(560, "zeros");
	float *C = create_one_dim_float(530, "zeros");
	float ***B = create_three_dim_float(400, 280, 500, "zeros");
	float **D = create_two_dim_float(330, 30, "zeros");
	float *E = create_one_dim_float(50, "zeros");

	for (int a = 4; a < 330; a++)
	{
	  
	    A[a]=A[a-4]*C[a]+E[a];
	  
	    D[a][a]=D[a-3][a-3]*0.374;
	  
	    D[a][a]=D[a-4][a-1]/0.771;
	  
	    A[a]=A[a+1]+B[a][a][a]/D[a][a];
	  
	    C[a]=C[a+3]-0.435;
	  
	    D[a][a]=C[a]/A[a]*B[a][a][a]+E[a];
	    B[a][a][a]=C[a+5]-B[a][a][a]/E[a];
	}

    return 0;
}