#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(350, "ones");
	int **D = create_two_dim_int(450, 80, "ones");
	int *A = create_one_dim_int(810, "ones");
	int **B = create_two_dim_int(80, 110, "ones");

	for (int a = 5; a < 80; a++)
	{
	  
	    B[a][a]=B[a-3][a-5]/A[a]+C[a];
	  
	    A[a]=C[a]/B[a][a]-D[a][a]*D[a][a];
	    C[a]=D[a][a]/A[a]-B[a][a];
	  
	    C[a]=D[a][a];
	  
	    A[a]=36;
	  
	    D[a][a]=D[a][a]+B[a][a]*26;
	    B[a][a]=D[a-5][a-5]+C[a]/A[a];
	}

    return 0;
}