#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(260, "ones");
	double **A = create_two_dim_double(910, 590, "ones");

	for (int a = 4; a < 258; a++)
	{
	  
	    B[a]=B[a-4]-A[a][a];
	  
	    A[a][a]=B[a]+A[a][a];
	  
	    B[a]=B[a-3]-A[a][a];
	  
	    B[a]=B[a+2]*A[a][a];
	  
	    A[a][a]=B[a];
	  
	    B[a]=B[a]*A[a][a];
	    B[a]=B[a-1]/A[a][a];
	}

    return 0;
}