#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(920, "ones");
	double **B = create_two_dim_double(890, 810, "ones");
	double ***C = create_three_dim_double(60, 900, 150, "ones");
	double ***D = create_three_dim_double(460, 970, 970, "ones");

	for (int a = 5; a < 55; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-5][a-1]*A[a]+B[a][a];
	  
	    C[a][a][a]=C[a+5][a+2][a+4]+D[a][a][a];
	  
	    double var_a=B[a][a]*0.176;
	    double var_b=B[a+1][a+1]-0.234;
	  
	    A[a]=B[a][a]*C[a][a][a];
	    C[a][a][a]=B[a-2][a-3]*C[a][a][a]+A[a];
	  
	    B[a][a]=B[a][a]-C[a][a][a]+A[a];
	    D[a][a][a]=B[a+3][a]-D[a][a][a];
	}

    return 0;
}