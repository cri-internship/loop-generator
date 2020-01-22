#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(810, 330, "zeros");
	double *A = create_one_dim_double(270, "zeros");
	double **B = create_two_dim_double(820, 710, "zeros");

	for (int a = 4; a < 810; a++)
	{
	  
	    B[a][a]=B[a+1][a+2]-C[a][a]+A[a];
	  
	    B[a][a]=C[a][a];
	  
	    C[a][a]=B[a][a];
	    C[a][a-1]=A[a];
	  
	    B[a][a]=B[a][a]-A[a]/C[a][a];
	}

    return 0;
}