#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(60, "zeros");
	int **C = create_two_dim_int(490, 1000, "zeros");
	int **B = create_two_dim_int(780, 500, "zeros");
	int **D = create_two_dim_int(670, 110, "zeros");

	for (int a = 0; a < 487; a++)
	{
	  
	    C[a][a]=C[a+3][a+2]-B[a][a]*A[a]/D[a][a];
	}

    return 0;
}