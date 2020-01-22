#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(940, "zeros");
	double **B = create_two_dim_double(440, 90, "zeros");
	double **E = create_two_dim_double(70, 920, "zeros");
	double **A = create_two_dim_double(240, 680, "zeros");
	double *C = create_one_dim_double(530, "zeros");

	for (int a = 1; a < 237; a++)
	{
	  
	    D[a]=D[a-1]/C[a]*E[a][a]-A[a][a]+B[a][a];
	  
	    B[a][a]=B[a+3][a+2]*0.393/E[a][a]+A[a][a];
	  
	    C[a]=0.025;
	    C[a+5]=0.783;
	  
	    D[a]=E[a][a]/A[a][a];
	  
	    C[a]=A[a][a]-B[a][a];
	    B[a][a]=A[a][a+3]/C[a]-E[a][a]*D[a]+B[a][a];
	}

    return 0;
}