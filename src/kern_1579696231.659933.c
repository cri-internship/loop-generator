#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(170, 780, "random");
	double *C = create_one_dim_double(660, "random");
	double **B = create_two_dim_double(940, 730, "random");

	for (int a = 4; a < 170; a++)
	{
	  
	    A[a][a]=A[a-1][a-4]+0.203;
	  
	    C[a]=C[a]/A[a][a]+0.783;
	    B[a][a]=C[a-1]-A[a][a];
	}

    return 0;
}