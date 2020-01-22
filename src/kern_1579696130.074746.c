#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(860, 690, "random");
	double *A = create_one_dim_double(750, "random");

	for (int a = 4; a < 857; a++)
	{
	  
	    B[a][a]=B[a-3][a-1]+0.246;
	  
	    B[a][a]=A[a];
	  
	    B[a][a]=B[a][a]*A[a];
	    A[a]=B[a+2][a+3]+A[a];
	}

    return 0;
}