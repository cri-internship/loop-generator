#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(940, 560, "random");
	int ***B = create_three_dim_int(770, 990, 150, "random");
	int **C = create_two_dim_int(840, 490, "random");
	int *D = create_one_dim_int(740, "random");

	for (int a = 3; a < 840; a++)
	{
	  
	    A[a][a]=A[a-2][a-1]-34;
	  
	    A[a][a]=A[a][a-3]/C[a][a]-B[a][a][a];
	  
	    int var_a=C[a][a]-33;
	    int var_b=C[a-2][a]-8;
	}

    return 0;
}