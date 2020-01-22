#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(360, "zeros");
	float ***D = create_three_dim_float(590, 630, 690, "zeros");
	float ***C = create_three_dim_float(40, 340, 700, "zeros");
	float ***B = create_three_dim_float(370, 210, 590, "zeros");

	for (int a = 5; a < 358; a++)
	{
	  
	    D[a][a][a]=D[a-3][a-3][a-4]*0.792;
	  
	    D[a][a][a]=D[a-2][a-3][a-5]-0.101;
	  
	    A[a]=A[a+2]/C[a][a][a]*D[a][a][a]+B[a][a][a];
	  
	    B[a][a][a]=B[a+1][a+1][a+3]-A[a]+D[a][a][a]*A[a];
	  
	    D[a][a][a]=D[a+3][a+4][a+3]*C[a][a][a];
	  
	    B[a][a][a]=D[a][a][a]*C[a][a][a]+A[a];
	}

    return 0;
}