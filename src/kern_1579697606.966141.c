#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(860, "zeros");
	double ***C = create_three_dim_double(720, 670, 690, "zeros");
	double **D = create_two_dim_double(640, 550, "zeros");
	double ***A = create_three_dim_double(940, 400, 420, "zeros");
	double *B = create_one_dim_double(840, "zeros");

	for (int a = 5; a < 636; a++)
	{
	  
	    B[a]=B[a-4]-E[a]*0.13+D[a][a];
	  
	    E[a]=E[a-1]-B[a]*A[a][a][a];
	  
	    D[a][a]=D[a-2][a-4]+0.316;
	  
	    D[a][a]=D[a+2][a+4]*E[a];
	  
	    D[a][a]=E[a]*A[a][a][a]+B[a]/D[a][a]-C[a][a][a];
	    B[a]=E[a-5]/C[a][a][a]*D[a][a];
	  
	    A[a][a][a]=D[a][a]+A[a][a][a];
	    E[a]=D[a-5][a]/A[a][a][a]-B[a];
	}

    return 0;
}