#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(610, "zeros");
	double ***A = create_three_dim_double(260, 720, 860, "zeros");
	double **D = create_two_dim_double(490, 250, "zeros");
	double **C = create_two_dim_double(130, 50, "zeros");
	double **B = create_two_dim_double(120, 500, "zeros");

	for (int a = 5; a < 126; a++)
	{
	  
	    D[a][a]=D[a-2][a-4]-A[a][a][a]/E[a]+C[a][a]*B[a][a];
	  
	    E[a]=0.41;
	    E[a-4]=0.3;
	  
	    D[a][a]=A[a][a][a]-D[a][a]/0.855;
	    E[a]=A[a+2][a+2][a]-C[a][a]*D[a][a]/B[a][a]+E[a];
	  
	    A[a][a][a]=C[a][a]*E[a]/B[a][a]+A[a][a][a];
	    C[a][a]=C[a][a+1]/D[a][a]+E[a];
	  
	    double var_a=C[a][a]-0.849;
	    double var_b=C[a-5][a-5]+0.4;
	  
	    double var_c=C[a][a]*0.85;
	    double var_d=C[a+1][a+4]+0.245;
	}

    return 0;
}