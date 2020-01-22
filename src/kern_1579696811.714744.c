#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(840, "random");
	int **A = create_two_dim_int(700, 680, "random");
	int ***B = create_three_dim_int(970, 10, 430, "random");
	int *C = create_one_dim_int(570, "random");

	for (int a = 4; a < 836; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-4][a]*11;
	  
	    D[a]=D[a+4]/A[a][a]+C[a];
	}

    return 0;
}