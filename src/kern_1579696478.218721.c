#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(350, "zeros");
	double *A = create_one_dim_double(830, "zeros");

	for (int a = 3; a < 349; a++)
	{
	  
	    A[a]=B[a];
	    B[a]=A[a]+B[a];
	  
	    B[a]=B[a+1]-A[a];
	  
	    A[a]=B[a];
	}

    return 0;
}