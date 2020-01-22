#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(380, 760, "ones");
	float **B = create_two_dim_float(490, 660, "ones");
	float *A = create_one_dim_float(560, "ones");
	float ***D = create_three_dim_float(170, 230, 990, "ones");

	for (int a = 5; a < 170; a++)
	{
	  
	    C[a][a]=C[a-4][a-2]/D[a][a][a];
	  
	    D[a][a][a]=D[a-4][a-5][a-1]-A[a]/C[a][a]*B[a][a];
	  
	    B[a][a]=B[a-5][a-4]/A[a]+D[a][a][a];
	  
	    C[a][a]=C[a+3][a+5]+B[a][a]-A[a]/D[a][a][a];
	  
	    D[a][a][a]=D[a][a][a]-C[a][a]*A[a];
	    C[a][a]=D[a-1][a-2][a]/C[a][a]*B[a][a];
	}

    return 0;
}