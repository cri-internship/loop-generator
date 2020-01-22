#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(480, "random");
	double **B = create_two_dim_double(500, 490, "random");
	double *D = create_one_dim_double(300, "random");
	double *C = create_one_dim_double(360, "random");

	for (int a = 5; a < 300; a++)
	{
	  
	    D[a]=D[a-3]/0.84;
	  
	    C[a]=A[a]/C[a]*D[a];
	    A[a]=B[a][a]/C[a];
	  
	    B[a][a]=D[a]/A[a]*A[a]-C[a];
	    D[a]=B[a][a]-C[a]/A[a];
	  
	    double var_a=A[a]*0.857;
	    double var_b=A[a-5]-0.608;
	}

    return 0;
}