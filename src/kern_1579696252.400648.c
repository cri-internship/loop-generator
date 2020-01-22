#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(860, 930, 570, "ones");
	double **C = create_two_dim_double(920, 200, "ones");
	double **D = create_two_dim_double(410, 630, "ones");
	double **A = create_two_dim_double(60, 180, "ones");
	double **B = create_two_dim_double(240, 760, "ones");

	for (int a = 3; a < 237; a++)
	{
	  
	    D[a][a]=D[a][a-2]-0.19;
	  
	    D[a][a]=0.431;
	  
	    B[a][a]=0.176;
	    B[a+3][a+3]=0.558;
	  
	    C[a][a]=E[a][a][a]*D[a][a];
	    C[a+5][a+2]=A[a][a]+B[a][a]-D[a][a];
	  
	    B[a][a]=C[a][a]+0.204/A[a][a]*C[a][a];
	  
	    B[a][a]=B[a][a]/A[a][a];
	    A[a][a]=B[a-1][a-3]-C[a][a];
	}

    return 0;
}