#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(260, 530, 250, "random");
	int *C = create_one_dim_int(990, "random");
	int *A = create_one_dim_int(560, "random");
	int *E = create_one_dim_int(290, "random");
	int **B = create_two_dim_int(10, 60, "random");

	for (int a = 2; a < 290; a++)
	{
	  
	    E[a]=B[a][a]/D[a][a][a]+A[a]-C[a];
	    E[a-2]=40;
	}

    return 0;
}