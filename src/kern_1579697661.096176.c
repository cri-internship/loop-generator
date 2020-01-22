#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(270, 910, "random");
	double **C = create_two_dim_double(190, 120, "random");
	double *A = create_one_dim_double(70, "random");

	for (int a = 5; a < 66; a++)
	{
	  
	    C[a][a]=C[a-2][a-3]/0.294;
	  
	    A[a]=A[a+4]+C[a][a];
	  
	    A[a]=0.871;
	  
	    double var_a=B[a][a]+0.451;
	    double var_b=B[a][a+5]*0.593;
	  
	    B[a][a]=B[a][a]*A[a]/A[a];
	    A[a]=B[a-5][a-3]*C[a][a];
	  
	    C[a][a]=A[a]*B[a][a]-C[a][a];
	    A[a]=A[a-2]*C[a][a];
	}

    return 0;
}