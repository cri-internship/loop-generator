#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(850, "zeros");
	float *A = create_one_dim_float(430, "zeros");
	float *C = create_one_dim_float(200, "zeros");
	float **B = create_two_dim_float(350, 170, "zeros");
	float ***D = create_three_dim_float(360, 740, 160, "zeros");

	for (int a = 1; a < 430; a++)
	{
	  
	    C[a]=A[a]/B[a][a]-E[a];
	    D[a][a][a]=A[a-1]*0.692/C[a]-E[a];
	  
	    float var_a=A[a]-0.552;
	}

    return 0;
}