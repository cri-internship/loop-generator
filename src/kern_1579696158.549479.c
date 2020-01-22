#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(230, 350, "zeros");
	double *E = create_one_dim_double(800, "zeros");
	double **B = create_two_dim_double(130, 1000, "zeros");
	double ***C = create_three_dim_double(900, 640, 620, "zeros");
	double **D = create_two_dim_double(820, 1000, "zeros");

	for (int a = 5; a < 130; a++)
	{
	  
	    A[a][a]=A[a][a+3]/0.73;
	  
	    E[a]=E[a+4]-0.435;
	  
	    B[a][a]=E[a];
	    B[a-5][a-3]=C[a][a][a]+A[a][a]*D[a][a];
	  
	    A[a][a]=0.287;
	  
	    D[a][a]=B[a][a]*C[a][a][a]-E[a];
	    D[a][a+4]=C[a][a][a]*E[a]+A[a][a];
	}

    return 0;
}