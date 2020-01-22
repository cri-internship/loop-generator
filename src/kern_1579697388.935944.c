#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(1000, 780, 420, "zeros");
	double ***B = create_three_dim_double(290, 470, 580, "zeros");
	double **A = create_two_dim_double(580, 130, "zeros");
	double *E = create_one_dim_double(760, "zeros");
	double ***C = create_three_dim_double(730, 660, 140, "zeros");

	for (int a = 4; a < 285; a++)
	{
	  
	    D[a][a][a]=D[a-4][a-2][a-1]/B[a][a][a]-E[a]*A[a][a]+C[a][a][a];
	  
	    B[a][a][a]=B[a+5][a+4][a+3]*D[a][a][a]+A[a][a]/E[a]-C[a][a][a];
	  
	    double var_a=B[a][a][a]+0.023;
	    double var_b=B[a][a+3][a+3]/0.106;
	}

    return 0;
}