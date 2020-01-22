#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(920, 460, "ones");
	int *A = create_one_dim_int(160, "ones");

	for (int a = 5; a < 160; a++)
	{
	  
	    B[a][a]=B[a-5][a-2]/39;
	  
	    A[a]=42;
	    A[a-2]=30;
	  
	    A[a]=B[a][a]/A[a];
	    B[a][a]=B[a+1][a+1]*A[a];
	}

    return 0;
}