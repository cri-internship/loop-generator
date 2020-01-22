#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(880, 920, "random");
	int **D = create_two_dim_int(810, 910, "random");
	int *E = create_one_dim_int(980, "random");
	int *B = create_one_dim_int(870, "random");
	int *A = create_one_dim_int(730, "random");

	for (int a = 0; a < 730; a++)
	{
	  
	    C[a][a]=C[a+4][a+3]-B[a]+E[a]/A[a]*D[a][a];
	  
	    E[a]=C[a][a];
	    E[a+1]=B[a]/D[a][a]+C[a][a]-A[a];
	}

    return 0;
}