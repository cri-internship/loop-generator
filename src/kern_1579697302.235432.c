#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(640, "zeros");
	int **B = create_two_dim_int(180, 450, "zeros");

	for (int a = 4; a < 180; a++)
	{
	  
	    A[a]=A[a-4]*4;
	  
	    B[a][a]=A[a]+11;
	  
	    A[a]=A[a-3]-B[a][a];
	  
	    A[a]=A[a-2]-B[a][a];
	  
	    B[a][a]=B[a-1][a-4]-30;
	}

    return 0;
}