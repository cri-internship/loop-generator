#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(200, "zeros");
	double **B = create_two_dim_double(240, 590, "zeros");

	for (int a = 0; a < 199; a++)
	{
	  
	    A[a]=A[a+1]-B[a][a];
	  
	    B[a][a]=B[a+5][a+5]*A[a];
	}

    return 0;
}