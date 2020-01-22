#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(710, 200, "ones");
	int ***D = create_three_dim_int(320, 60, 170, "ones");
	int *A = create_one_dim_int(270, "ones");
	int **B = create_two_dim_int(90, 60, "ones");
	int ***C = create_three_dim_int(270, 600, 790, "ones");

	for (int a = 3; a < 270; a++)
	{
	  
	    C[a][a][a]=A[a]+E[a][a];
	    C[a-2][a-3][a]=50/D[a][a][a]+B[a][a];
	}

    return 0;
}