#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(190, 700, "ones");
	double ***E = create_three_dim_double(120, 640, 70, "ones");
	double **B = create_two_dim_double(260, 960, "ones");
	double **C = create_two_dim_double(780, 470, "ones");
	double *D = create_one_dim_double(380, "ones");

	for (int a = 4; a < 190; a++)
	{
	  
	    D[a]=D[a+2]*0.989;
	  
	    B[a][a]=B[a+2][a+5]*D[a];
	  
	    double var_a=C[a][a]-0.461;
	    double var_b=C[a+3][a+3]-0.925;
	  
	    B[a][a]=A[a][a]/E[a][a][a]+B[a][a];
	    A[a][a]=A[a-3][a-4]/C[a][a]+C[a][a]-E[a][a][a];
	}

    return 0;
}