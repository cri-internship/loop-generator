#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(650, 640, "ones");
	int ***C = create_three_dim_int(210, 140, 590, "ones");
	int *B = create_one_dim_int(950, "ones");

	for (int a = 5; a < 650; a++)
	{
	  
	    B[a]=B[a-5]-C[a][a][a]/A[a][a];
	  
	    B[a]=C[a][a][a];
	  
	    A[a][a]=A[a][a]/30-C[a][a][a];
	    C[a][a][a]=A[a-2][a]*C[a][a][a]/B[a];
	}

    return 0;
}