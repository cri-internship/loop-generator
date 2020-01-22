#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(740, "random");
	double *B = create_one_dim_double(480, "random");
	double **C = create_two_dim_double(500, 760, "random");

	for (int a = 4; a < 740; a++)
	{
	  
	    B[a]=A[a]*C[a][a]+B[a];
	    C[a][a]=A[a-4]*C[a][a]+B[a];
	}

    return 0;
}