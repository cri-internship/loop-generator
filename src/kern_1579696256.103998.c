#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(290, 120, "zeros");
	double ***C = create_three_dim_double(230, 750, 560, "zeros");
	double *D = create_one_dim_double(560, "zeros");
	double *E = create_one_dim_double(1000, "zeros");
	double ***B = create_three_dim_double(50, 440, 590, "zeros");

	for (int a = 2; a < 285; a++)
	{
	  
	    double var_a=A[a][a]-0.381;
	    double var_b=A[a+3][a+5]*0.752;
	  
	    B[a][a][a]=E[a]/C[a][a][a]-A[a][a]+D[a];
	    E[a]=E[a-2]*0.672-B[a][a][a];
	}

    return 0;
}