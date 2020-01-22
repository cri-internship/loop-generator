#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(940, 730, "random");
	double **C = create_two_dim_double(590, 350, "random");
	double *B = create_one_dim_double(500, "random");

	for (int a = 0; a < 496; a++)
	{
	  
	    B[a]=C[a][a]-A[a][a];
	    B[a]=B[a]+A[a][a];
	  
	    B[a]=B[a+4]/C[a][a]+0.59;
	}

    return 0;
}