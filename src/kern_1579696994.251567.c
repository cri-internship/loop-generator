#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(160, 560, "ones");
	int **A = create_two_dim_int(650, 980, "ones");
	int *B = create_one_dim_int(20, "ones");
	int **C = create_two_dim_int(390, 1000, "ones");

	for (int a = 5; a < 20; a++)
	{
	  
	    C[a][a]=C[a-1][a-5]/D[a][a];
	  
	    D[a][a]=2;
	    D[a+4][a+5]=10;
	  
	    C[a][a]=D[a][a]*B[a]+A[a][a]-C[a][a];
	    D[a][a]=D[a+4][a+5]/A[a][a]*B[a]+C[a][a];
	  
	    int var_a=B[a]*15;
	    int var_b=B[a-3]-0;
	}

    return 0;
}