#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(410, "ones");
	float ***D = create_three_dim_float(740, 150, 460, "ones");
	float *B = create_one_dim_float(980, "ones");
	float **C = create_two_dim_float(590, 620, "ones");
	float ***E = create_three_dim_float(420, 120, 230, "ones");

	for (int a = 5; a < 410; a++)
	{
	  
	    A[a]=A[a-5]/0.124;
	  
	    C[a][a]=0.189;
	    C[a+1][a+3]=0.376;
	  
	    C[a][a]=0.54;
	  
	    D[a][a][a]=D[a][a][a]*B[a]-0.797;
	    E[a][a][a]=D[a+5][a+2][a+1]+C[a][a]/E[a][a][a];
	  
	    B[a]=C[a][a]+D[a][a][a]-A[a]*B[a]/D[a][a][a];
	    A[a]=C[a][a+1]/B[a]*A[a]+E[a][a][a];
	  
	    C[a][a]=D[a][a][a]+E[a][a][a]/0.291*A[a];
	    C[a][a]=D[a+4][a+3][a+5]-A[a]+C[a][a]/B[a]*0.832;
	}

    return 0;
}