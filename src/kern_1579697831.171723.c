#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(240, 130, 100, "zeros");
	double *B = create_one_dim_double(800, "zeros");
	double **D = create_two_dim_double(990, 120, "zeros");
	double **A = create_two_dim_double(510, 390, "zeros");
	double ***C = create_three_dim_double(780, 870, 540, "zeros");

	for (int a = 5; a < 240; a++)
	{
	  
	    D[a][a]=D[a-3][a-4]+E[a][a][a]-A[a][a]*C[a][a][a]/B[a];
	  
	    D[a][a]=D[a+3][a]+0.238;
	  
	    D[a][a]=D[a+5][a+2]-E[a][a][a]/C[a][a][a];
	  
	    E[a][a][a]=D[a][a]-C[a][a][a]+D[a][a]/A[a][a];
	    E[a-5][a-4][a-4]=D[a][a]-B[a]/A[a][a];
	}

    return 0;
}