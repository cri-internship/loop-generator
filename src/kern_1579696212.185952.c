#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(230, "random");
	double *A = create_one_dim_double(440, "random");
	double **C = create_two_dim_double(410, 420, "random");
	double **D = create_two_dim_double(220, 220, "random");
	double *B = create_one_dim_double(830, "random");

	for (int a = 5; a < 220; a++)
	{
	  
	    C[a][a]=C[a-1][a-5]-B[a];
	  
	    B[a]=B[a]+C[a][a]/E[a]*D[a][a]-A[a];
	    B[a]=A[a]+E[a];
	  
	    D[a][a]=0.171;
	    D[a-5][a-2]=0.933;
	  
	    C[a][a]=C[a][a]*B[a]/0.274+E[a]-A[a];
	    E[a]=C[a+3][a]-B[a]/D[a][a]+A[a];
	  
	    D[a][a]=B[a]-C[a][a];
	    A[a]=B[a-4]*E[a];
	}

    return 0;
}