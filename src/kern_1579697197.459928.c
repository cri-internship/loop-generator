#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(130, "zeros");
	int **B = create_two_dim_int(770, 90, "zeros");

	for (int a = 4; a < 130; a++)
	{
	  
	    A[a]=A[a-1]*B[a][a];
	  
	    B[a][a]=A[a]-B[a][a];
	  
	    A[a]=A[a-4]/B[a][a];
	}

    return 0;
}