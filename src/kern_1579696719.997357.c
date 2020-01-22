#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(620, 60, "ones");

	for (int a = 0; a < 617; a++)
	{
	  
	    A[a][a]=A[a+1][a+3]+0.805;
	}

    return 0;
}