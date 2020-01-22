#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(310, "ones");
	double **A = create_two_dim_double(660, 500, "ones");

	for (int a = 5; a < 658; a++)
	{
	  
	    A[a][a]=A[a+2][a+2]*B[a];
	  
	    B[a]=A[a][a]/0.673;
	    A[a][a]=A[a-5][a-3]/B[a];
	}

    return 0;
}