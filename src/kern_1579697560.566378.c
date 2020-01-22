#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(500, 140, "random");

	for (int a = 0; a < 497; a++)
	{
	  
	    A[a][a]=A[a+2][a+3]+0.646;
	}

    return 0;
}