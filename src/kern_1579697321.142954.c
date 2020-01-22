#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(600, 70, "ones");
	double *A = create_one_dim_double(130, "ones");
	double **B = create_two_dim_double(60, 140, "ones");
	double *C = create_one_dim_double(530, "ones");

	for (int a = 2; a < 130; a++)
	{
	  
	    A[a]=A[a-2]*C[a]+D[a][a];
	  
	    D[a][a]=D[a+2][a+2]+0.606;
	  
	    D[a][a]=B[a][a]/B[a][a];
	  
	    double var_a=D[a][a]-0.763;
	    double var_b=D[a+1][a+2]/0.123;
	}

    return 0;
}