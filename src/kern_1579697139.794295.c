#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(920, 270, 420, "zeros");
	float ***B = create_three_dim_float(20, 270, 830, "zeros");
	float *C = create_one_dim_float(890, "zeros");
	float **D = create_two_dim_float(730, 940, "zeros");
	float **A = create_two_dim_float(560, 120, "zeros");

	for (int a = 4; a < 888; a++)
	{
	  
	    C[a]=C[a+2]+E[a][a][a]*A[a][a]/B[a][a][a]-0.02;
	  
	    E[a][a][a]=C[a]+D[a][a]/A[a][a];
	    E[a][a][a]=A[a][a]*D[a][a]/C[a]+B[a][a][a];
	  
	    D[a][a]=E[a][a][a]/C[a]-A[a][a]+D[a][a];
	    C[a]=E[a+4][a+1][a+5]+B[a][a][a]*C[a];
	}

    return 0;
}