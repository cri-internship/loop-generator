#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(840, "ones");
	int *C = create_one_dim_int(20, "ones");
	int **B = create_two_dim_int(860, 710, "ones");

	for (int a = 4; a < 17; a++)
	{
	  
	    C[a]=C[a-4]+A[a];
	  
	    B[a][a]=45;
	    B[a+3][a+2]=50;
	  
	    C[a]=23;
	  
	    A[a]=B[a][a]*C[a]+A[a];
	    C[a]=B[a][a-2]/A[a];
	}

    return 0;
}