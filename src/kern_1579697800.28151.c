#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(800, 310, 550, "zeros");
	float ***B = create_three_dim_float(390, 990, 60, "zeros");
	float *C = create_one_dim_float(130, "zeros");
	float ***A = create_three_dim_float(30, 330, 90, "zeros");

	for (int a = 5; a < 30; a++)
	{
	  
	    C[a]=C[a-5]+A[a][a][a]*D[a][a][a]-B[a][a][a];
	  
	    A[a][a][a]=A[a-4][a-3][a-1]/C[a]-B[a][a][a]+D[a][a][a];
	  
	    B[a][a][a]=B[a-4][a-4][a-3]+A[a][a][a];
	  
	    D[a][a][a]=D[a-5][a][a-2]-B[a][a][a]*A[a][a][a];
	  
	    C[a]=C[a+4]/A[a][a][a]*B[a][a][a];
	  
	    B[a][a][a]=B[a+3][a+1][a]*D[a][a][a]+C[a]-A[a][a][a];
	}

    return 0;
}