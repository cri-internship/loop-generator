#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(60, "random");
	double *D = create_one_dim_double(830, "random");
	double *C = create_one_dim_double(10, "random");
	double **A = create_two_dim_double(490, 510, "random");

	for (int a = 3; a < 8; a++)
	{
	  
	    D[a]=D[a-2]*0.178;
	  
	    B[a]=B[a-3]-0.453;
	  
	    B[a]=0.007;
	  
	    C[a]=B[a];
	    C[a+2]=D[a];
	  
	    double var_a=A[a][a]/0.939;
	    double var_b=A[a+3][a+4]*0.078;
	  
	    D[a]=C[a]+B[a]/0.721-A[a][a];
	    C[a]=C[a]/D[a]*A[a][a];
	}

    return 0;
}