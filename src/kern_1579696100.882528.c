#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(150, 200, "ones");
	double *A = create_one_dim_double(420, "ones");
	double *B = create_one_dim_double(730, "ones");

	for (int a = 4; a < 145; a++)
	{
	  
	    A[a]=A[a-4]/0.246;
	  
	    A[a]=A[a+1]-B[a];
	  
	    C[a][a]=C[a][a+5]/0.446;
	}

    return 0;
}