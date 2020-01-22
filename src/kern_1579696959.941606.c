#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(60, 980, "zeros");
	float ***D = create_three_dim_float(240, 820, 140, "zeros");
	float *E = create_one_dim_float(160, "zeros");
	float *C = create_one_dim_float(60, "zeros");
	float ***B = create_three_dim_float(790, 70, 170, "zeros");

	for (int a = 5; a < 56; a++)
	{
	  
	    D[a][a][a]=D[a-4][a][a-1]/0.997-C[a]+A[a][a];
	  
	    B[a][a][a]=B[a][a-5][a-4]/D[a][a][a]*E[a]+D[a][a][a]-C[a];
	  
	    D[a][a][a]=D[a-1][a-5][a]+0.682;
	  
	    B[a][a][a]=B[a+1][a][a]-0.145;
	  
	    C[a]=C[a+4]+B[a][a][a]/D[a][a][a]*A[a][a];
	  
	    B[a][a][a]=B[a+1][a+4][a+5]+C[a];
	  
	    A[a][a]=0.039;
	    A[a+2][a+3]=0.886;
	}

    return 0;
}