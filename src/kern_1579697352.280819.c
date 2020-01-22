#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(250, 810, "random");
	double *D = create_one_dim_double(920, "random");
	double *C = create_one_dim_double(730, "random");
	double *A = create_one_dim_double(400, "random");

	for (int a = 1; a < 730; a++)
	{
	  
	    C[a]=C[a-1]/0.471;
	  
	    D[a]=D[a+2]+0.007;
	  
	    C[a]=0.952;
	  
	    D[a]=0.73;
	}

    return 0;
}