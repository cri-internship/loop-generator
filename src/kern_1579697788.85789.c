#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(120, 600, "random");
	double ***C = create_three_dim_double(750, 300, 810, "random");
	double *A = create_one_dim_double(830, "random");
	double **D = create_two_dim_double(270, 840, "random");
	double ***E = create_three_dim_double(650, 680, 680, "random");

	for (int a = 5; a < 118; a++)
	{
	  
	    A[a]=0.805;
	    A[a-2]=0.719;
	  
	    A[a]=0.948;
	  
	    A[a]=B[a][a]+C[a][a][a];
	    E[a][a][a]=B[a-5][a-2]-E[a][a][a]/A[a]*D[a][a]+E[a][a][a];
	  
	    double var_a=B[a][a]*0.669;
	    double var_b=B[a+2][a]/0.65;
	  
	    B[a][a]=B[a][a]-D[a][a];
	    D[a][a]=B[a-5][a-3]*E[a][a][a]+A[a]-0.36/D[a][a];
	}

    return 0;
}