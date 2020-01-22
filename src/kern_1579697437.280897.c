#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(950, "ones");
	double **B = create_two_dim_double(790, 760, "ones");

	for (int a = 5; a < 786; a++)
	{
	  
	    A[a]=A[a+5]/B[a][a];
	  
	    B[a][a]=0.868;
	    B[a][a+4]=0.611;
	  
	    A[a]=B[a][a];
	  
	    B[a][a]=A[a];
	}

    return 0;
}