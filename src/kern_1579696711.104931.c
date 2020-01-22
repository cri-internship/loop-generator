#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(210, "zeros");
	double **B = create_two_dim_double(670, 650, "zeros");
	double *C = create_one_dim_double(890, "zeros");
	double *A = create_one_dim_double(250, "zeros");

	for (int a = 4; a < 250; a++)
	{
	  
	    B[a][a]=B[a-1][a-2]+0.844-A[a]/C[a];
	  
	    C[a]=0.331+D[a];
	    C[a-4]=D[a];
	  
	    B[a][a]=0.75;
	  
	    A[a]=C[a];
	    A[a-3]=D[a]+B[a][a]-C[a];
	}

    return 0;
}