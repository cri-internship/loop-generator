#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(320, 970, "zeros");
	double *B = create_one_dim_double(280, "zeros");

	for (int a = 0; a < 275; a++)
	{
	  
	    A[a][a]=A[a+5][a]/0.037;
	  
	    B[a]=A[a][a];
	    B[a+5]=A[a][a];
	}

    return 0;
}