#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(20, 70, "random");
	double **B = create_two_dim_double(520, 330, "random");
	double ***C = create_three_dim_double(240, 800, 640, "random");
	double *E = create_one_dim_double(920, "random");
	double **D = create_two_dim_double(510, 120, "random");

	for (int a = 5; a < 15; a++)
	{
	  
	    E[a]=E[a-5]+0.469;
	  
	    B[a][a]=B[a-3][a-4]/E[a];
	  
	    A[a][a]=A[a-2][a-1]*C[a][a][a]+B[a][a]-D[a][a]/E[a];
	  
	    C[a][a][a]=C[a+3][a+1][a]+0.764;
	  
	    E[a]=0.548;
	  
	    D[a][a]=A[a][a]*0.52+D[a][a]/B[a][a]-C[a][a][a];
	    C[a][a][a]=A[a+5][a+5]+E[a]/C[a][a][a]*D[a][a]-B[a][a];
	}

    return 0;
}