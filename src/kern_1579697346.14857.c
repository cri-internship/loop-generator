#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(350, "zeros");
	double ***C = create_three_dim_double(70, 390, 230, "zeros");
	double ***D = create_three_dim_double(600, 600, 420, "zeros");
	double **B = create_two_dim_double(810, 110, "zeros");
	double *A = create_one_dim_double(480, "zeros");

	for (int a = 5; a < 65; a++)
	{
	  
	    E[a]=E[a-1]+0.061;
	  
	    C[a][a][a]=C[a+4][a+1][a+5]-A[a]*B[a][a]/E[a]+D[a][a][a];
	  
	    E[a]=C[a][a][a];
	  
	    C[a][a][a]=C[a][a][a]+A[a]/E[a];
	    D[a][a][a]=C[a][a-4][a-5]+B[a][a]-0.972;
	  
	    double var_a=A[a]+0.324;
	    double var_b=A[a+5]*0.466;
	}

    return 0;
}