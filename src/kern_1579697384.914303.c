#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(310, 60, 760, "ones");
	int **A = create_two_dim_int(120, 470, "ones");
	int *B = create_one_dim_int(710, "ones");
	int *C = create_one_dim_int(270, "ones");

	for (int a = 5; a < 117; a++)
	{
	  
	    A[a][a]=A[a-5][a-3]+42*C[a]-D[a][a][a];
	  
	    D[a][a][a]=D[a][a+5][a+5]/23-B[a]+A[a][a];
	  
	    A[a][a]=42;
	}

    return 0;
}