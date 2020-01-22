#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(640, "ones");
	int *B = create_one_dim_int(990, "ones");
	int ***D = create_three_dim_int(620, 50, 330, "ones");
	int **C = create_two_dim_int(50, 510, "ones");
	int ***E = create_three_dim_int(900, 390, 150, "ones");

	for (int a = 4; a < 640; a++)
	{
	  
	    A[a]=A[a-1]/B[a];
	  
	    E[a][a][a]=A[a]+C[a][a]-D[a][a][a];
	    E[a-2][a-1][a-4]=B[a]*C[a][a];
	}

    return 0;
}