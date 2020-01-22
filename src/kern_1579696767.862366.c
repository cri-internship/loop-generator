#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(770, "ones");
	float **E = create_two_dim_float(50, 660, "ones");
	float **C = create_two_dim_float(710, 720, "ones");
	float ***D = create_three_dim_float(220, 380, 110, "ones");
	float **B = create_two_dim_float(210, 850, "ones");

	for (int a = 5; a < 210; a++)
	{
	  
	    B[a][a]=B[a-5][a-4]+0.018;
	  
	    A[a]=A[a+1]-E[a][a]*B[a][a]/D[a][a][a];
	  
	    float var_a=A[a]+0.027;
	    float var_b=A[a-4]/0.752;
	  
	    D[a][a][a]=B[a][a]*A[a]/C[a][a]-E[a][a]+D[a][a][a];
	    A[a]=B[a-4][a-5]*D[a][a][a];
	}

    return 0;
}