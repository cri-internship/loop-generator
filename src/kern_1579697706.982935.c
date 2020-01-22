#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(510, "zeros");
	double **C = create_two_dim_double(70, 110, "zeros");
	double *D = create_one_dim_double(200, "zeros");
	double *E = create_one_dim_double(190, "zeros");
	double **A = create_two_dim_double(660, 150, "zeros");

	for (int a = 5; a < 70; a++)
	{
	  
	    C[a][a]=C[a-2][a-2]-B[a]+E[a]/D[a];
	  
	    B[a]=B[a+3]-0.657;
	  
	    C[a][a]=0.63;
	  
	    double var_a=E[a]/0.808;
	    double var_b=E[a-3]+0.802;
	  
	    D[a]=E[a]*A[a][a]-C[a][a]+C[a][a];
	  
	    B[a]=D[a]+B[a]*C[a][a]-A[a][a]/E[a];
	    A[a][a]=D[a-3]/C[a][a]+E[a]*A[a][a]-B[a];
	  
	    double var_c=C[a][a]+0.392;
	    double var_d=C[a-5][a-2]+0.913;
	}

    return 0;
}