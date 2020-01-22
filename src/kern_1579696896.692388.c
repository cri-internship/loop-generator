#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(180, 570, "random");
	double **B = create_two_dim_double(720, 190, "random");
	double *C = create_one_dim_double(690, "random");

	for (int a = 3; a < 176; a++)
	{
	  
	    C[a]=A[a][a]/B[a][a];
	    C[a]=C[a]/A[a][a];
	  
	    C[a]=C[a+2]-B[a][a]/A[a][a];
	  
	    A[a][a]=A[a+4][a]+0.625;
	  
	    B[a][a]=C[a]-C[a];
	    B[a][a+1]=0.75;
	  
	    B[a][a]=B[a][a]+A[a][a]-C[a];
	    A[a][a]=B[a-3][a-1]*A[a][a]-C[a];
	  
	    double var_a=B[a][a]+0.003;
	    double var_b=B[a+5][a]*0.935;
	}

    return 0;
}