#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(150, 180, "random");
	double *B = create_one_dim_double(60, "random");
	double *D = create_one_dim_double(420, "random");
	double *A = create_one_dim_double(710, "random");

	for (int a = 2; a < 145; a++)
	{
	  
	    C[a][a]=B[a];
	    C[a+3][a+5]=D[a]+A[a];
	  
	    A[a]=C[a][a]+D[a]*B[a];
	    A[a-1]=D[a]+C[a][a]-B[a];
	  
	    double var_a=C[a][a]-0.878;
	    double var_b=C[a][a-2]*0.166;
	  
	    C[a][a]=C[a][a]*0.913+B[a]-A[a];
	    D[a]=C[a-2][a-2]-D[a];
	}

    return 0;
}