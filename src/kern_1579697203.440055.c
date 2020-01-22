#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(500, "random");
	double *B = create_one_dim_double(940, "random");
	double *E = create_one_dim_double(930, "random");
	double **A = create_two_dim_double(610, 90, "random");
	double *C = create_one_dim_double(360, "random");

	for (int a = 1; a < 360; a++)
	{
	  
	    D[a]=D[a+2]/0.672;
	  
	    C[a]=0.1;
	    C[a]=0.208;
	  
	    B[a]=C[a]*D[a]+A[a][a]-E[a]/B[a];
	    C[a]=C[a-1]/E[a]*B[a]+A[a][a]-D[a];
	}

    return 0;
}