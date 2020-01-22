#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(40, 930, "zeros");
	double *A = create_one_dim_double(20, "zeros");
	double *D = create_one_dim_double(670, "zeros");
	double **B = create_two_dim_double(280, 820, "zeros");

	for (int a = 5; a < 16; a++)
	{
	  
	    B[a][a]=B[a-5][a-3]/0.766;
	  
	    D[a]=A[a]-C[a][a]*B[a][a];
	    C[a][a]=A[a+4]+D[a]-B[a][a];
	}

    return 0;
}