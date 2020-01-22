#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(430, 470, "random");
	double *B = create_one_dim_double(930, "random");
	double **E = create_two_dim_double(20, 960, "random");
	double **A = create_two_dim_double(550, 860, "random");
	double **D = create_two_dim_double(160, 900, "random");

	for (int a = 5; a < 155; a++)
	{
	  
	    B[a]=A[a][a]+D[a][a]/C[a][a];
	    B[a]=B[a]*E[a][a]-D[a][a]/E[a][a]+C[a][a];
	  
	    B[a]=B[a+3]*E[a][a]/0.809;
	  
	    C[a][a]=B[a]*E[a][a]+C[a][a]/A[a][a]-D[a][a];
	    B[a]=A[a][a]*E[a][a]+C[a][a];
	  
	    double var_a=B[a]/0.406;
	    double var_b=B[a-5]*0.986;
	  
	    D[a][a]=D[a][a]+B[a]*A[a][a];
	    E[a][a]=D[a+5][a]+C[a][a]*B[a]-E[a][a]/A[a][a];
	}

    return 0;
}