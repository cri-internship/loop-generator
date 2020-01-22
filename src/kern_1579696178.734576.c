#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(60, 190, "zeros");
	double **A = create_two_dim_double(840, 980, "zeros");
	double *E = create_one_dim_double(510, "zeros");
	double **B = create_two_dim_double(140, 840, "zeros");
	double **C = create_two_dim_double(80, 700, "zeros");

	for (int a = 4; a < 60; a++)
	{
	  
	    D[a][a]=D[a-2][a-4]/E[a]*A[a][a]-C[a][a]+B[a][a];
	  
	    C[a][a]=C[a][a+2]-0.587;
	  
	    B[a][a]=D[a][a]*A[a][a];
	    B[a][a+3]=A[a][a];
	  
	    double var_a=E[a]-0.542;
	    double var_b=E[a-3]+0.237;
	  
	    C[a][a]=E[a]*0.644;
	    B[a][a]=E[a+2]-C[a][a]/A[a][a]+D[a][a];
	  
	    double var_c=C[a][a]/0.158;
	    double var_d=C[a+5][a+5]-0.541;
	}

    return 0;
}