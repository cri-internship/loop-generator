#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(690, "random");
	double **B = create_two_dim_double(530, 400, "random");

	for (int a = 0; a < 525; a++)
	{
	  
	    B[a][a]=B[a+2][a]/A[a];
	  
	    B[a][a]=0.657;
	}

    return 0;
}