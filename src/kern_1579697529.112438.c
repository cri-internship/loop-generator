#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(310, 30, "zeros");
	double *D = create_one_dim_double(930, "zeros");
	double **A = create_two_dim_double(200, 690, "zeros");
	double *E = create_one_dim_double(60, "zeros");
	double **C = create_two_dim_double(740, 690, "zeros");

	for (int a = 5; a < 305; a++)
	{
	  
	    B[a][a]=B[a-5][a-3]-E[a]*D[a]/A[a][a];
	  
	    C[a][a]=C[a][a+2]/0.681;
	  
	    A[a][a]=D[a]*B[a][a];
	    D[a]=C[a][a]-B[a][a]/E[a]+A[a][a];
	  
	    C[a][a]=B[a][a]*D[a]-C[a][a]/A[a][a]+E[a];
	    D[a]=B[a+5][a+1]*C[a][a]+0.983;
	}

    return 0;
}