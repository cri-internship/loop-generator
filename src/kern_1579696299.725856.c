#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(350, "zeros");
	double **C = create_two_dim_double(220, 150, "zeros");
	double *A = create_one_dim_double(250, "zeros");
	double **B = create_two_dim_double(900, 90, "zeros");

	for (int a = 3; a < 220; a++)
	{
	  
	    C[a][a]=C[a-2][a]-D[a];
	  
	    C[a][a]=C[a-3][a]-A[a]*B[a][a];
	  
	    B[a][a]=B[a-1][a-2]-C[a][a]/D[a];
	  
	    D[a]=D[a+2]+0.474;
	}

    return 0;
}