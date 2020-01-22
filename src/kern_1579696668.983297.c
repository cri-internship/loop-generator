#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(160, 850, 850, "zeros");
	float **A = create_two_dim_float(350, 970, "zeros");
	float **C = create_two_dim_float(500, 400, "zeros");
	float *B = create_one_dim_float(490, "zeros");
	float **E = create_two_dim_float(210, 520, "zeros");

	for (int a = 0; a < 206; a++)
	{
	  
	    C[a][a]=C[a+3][a+2]/0.317;
	  
	    A[a][a]=A[a+5][a+1]/0.26;
	  
	    C[a][a]=C[a+4][a+3]*0.962;
	  
	    C[a][a]=C[a+5][a+2]/D[a][a][a]-0.99;
	  
	    B[a]=E[a][a]+C[a][a]/A[a][a];
	    B[a+2]=C[a][a]+E[a][a];
	  
	    B[a]=E[a][a]/B[a];
	    A[a][a]=E[a+2][a+4]*0.911;
	  
	    E[a][a]=C[a][a]+D[a][a][a]/B[a]-A[a][a]*E[a][a];
	    D[a][a][a]=C[a][a+3]-E[a][a]+D[a][a][a]/B[a];
	}

    return 0;
}