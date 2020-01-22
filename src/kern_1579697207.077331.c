#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(710, 20, 730, "ones");
	int *C = create_one_dim_int(450, "ones");
	int **B = create_two_dim_int(640, 250, "ones");
	int **D = create_two_dim_int(30, 460, "ones");

	for (int a = 2; a < 30; a++)
	{
	  
	    A[a][a][a]=D[a][a]+C[a]*B[a][a]-25;
	    D[a][a]=D[a-2][a-1]-B[a][a];
	}

    return 0;
}