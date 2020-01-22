#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(390, "ones");
	int *B = create_one_dim_int(100, "ones");
	int ***C = create_three_dim_int(360, 70, 670, "ones");
	int **D = create_two_dim_int(710, 940, "ones");

	for (int a = 5; a < 360; a++)
	{
	  
	    A[a]=C[a][a][a]/D[a][a];
	    B[a]=C[a-5][a-3][a-2]/A[a]*B[a];
	}

    return 0;
}