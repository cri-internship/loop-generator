#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(640, "zeros");
	double ***B = create_three_dim_double(300, 960, 140, "zeros");
	double **C = create_two_dim_double(830, 280, "zeros");
	double **A = create_two_dim_double(790, 800, "zeros");
	double *D = create_one_dim_double(440, "zeros");

	for (int a = 5; a < 437; a++)
	{
	  
	    D[a]=D[a-5]*0.161;
	  
	    D[a]=D[a-3]+0.616;
	  
	    D[a]=D[a+3]+0.209;
	  
	    double var_a=C[a][a]/0.342;
	    double var_b=C[a+4][a+4]-0.896;
	  
	    B[a][a][a]=E[a]/A[a][a]-D[a];
	    A[a][a]=E[a-3]-0.548+D[a]*C[a][a];
	}

    return 0;
}