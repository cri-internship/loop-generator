#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(790, "ones");
	int **D = create_two_dim_int(570, 210, "ones");
	int **B = create_two_dim_int(230, 540, "ones");
	int *C = create_one_dim_int(730, "ones");

	for (int a = 4; a < 226; a++)
	{
	  
	    A[a]=41;
	    D[a][a]=A[a]/0;
	  
	    D[a][a]=D[a-3][a]+27;
	  
	    C[a]=B[a][a]/A[a];
	    B[a][a]=B[a-4][a-1]/A[a];
	  
	    A[a]=B[a][a]/C[a];
	    D[a][a]=B[a+4][a+4]+46*D[a][a]-C[a];
	  
	    D[a][a]=D[a][a]/B[a][a]+B[a][a];
	    D[a][a]=D[a+1][a+5]*B[a][a]/C[a]+A[a];
	}

    return 0;
}