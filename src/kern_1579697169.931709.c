#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(920, "random");
	double *B = create_one_dim_double(980, "random");

	for (int a = 4; a < 918; a++)
	{
	  
	    A[a]=A[a-4]+B[a];
	  
	    A[a]=A[a+2]/B[a];
	  
	    B[a]=B[a]*0.185;
	    A[a]=B[a-2]/A[a];
	  
	    B[a]=B[a]/0.362;
	}

    return 0;
}