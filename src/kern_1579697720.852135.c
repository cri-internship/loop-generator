#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(590, 390, "random");
	int ***A = create_three_dim_int(490, 80, 60, "random");
	int *C = create_one_dim_int(670, "random");

	for (int a = 5; a < 490; a++)
	{
	  
	    C[a]=A[a][a][a];
	    C[a]=B[a][a];
	  
	    B[a][a]=A[a][a][a]-C[a]/B[a][a];
	    A[a][a][a]=A[a][a-4][a-2]*C[a];
	}

    return 0;
}