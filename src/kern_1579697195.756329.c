#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(450, 790, 350, "zeros");
	double *C = create_one_dim_double(740, "zeros");
	double **B = create_two_dim_double(480, 980, "zeros");
	double **D = create_two_dim_double(680, 920, "zeros");
	double *E = create_one_dim_double(800, "zeros");

	for (int a = 5; a < 450; a++)
	{
	  
	    B[a][a]=B[a-2][a-4]-0.486;
	  
	    D[a][a]=D[a][a-3]/E[a]*C[a]+B[a][a]-A[a][a][a];
	  
	    C[a]=0.344;
	    C[a+5]=0.548;
	  
	    A[a][a][a]=0.567*C[a];
	    A[a-5][a-1][a]=E[a]-D[a][a]*C[a];
	  
	    double var_a=D[a][a]+0.557;
	    double var_b=D[a-2][a-5]/0.905;
	  
	    E[a]=D[a][a]*0.646+C[a];
	    A[a][a][a]=D[a+1][a+5]/A[a][a][a]+B[a][a]*C[a]-E[a];
	}

    return 0;
}