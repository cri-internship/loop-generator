#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(320, 650, 650, "random");
	double *D = create_one_dim_double(540, "random");
	double **A = create_two_dim_double(230, 630, "random");
	double *B = create_one_dim_double(540, "random");

	for (int a = 2; a < 540; a++)
	{
	  
	    D[a]=B[a]*D[a]+A[a][a];
	    A[a][a]=B[a-2]/C[a][a][a]+A[a][a];
	}

    return 0;
}