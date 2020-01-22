#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(210, "random");
	double **A = create_two_dim_double(720, 770, "random");

	for (int a = 4; a < 206; a++)
	{
	  
	    B[a]=B[a-4]-0.953;
	  
	    B[a]=B[a+4]+A[a][a];
	  
	    double var_a=B[a]/0.407;
	    double var_b=B[a-2]+0.757;
	}

    return 0;
}