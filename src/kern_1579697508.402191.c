#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(710, "random");
	int **C = create_two_dim_int(120, 70, "random");
	int *A = create_one_dim_int(630, "random");
	int *B = create_one_dim_int(120, "random");

	for (int a = 2; a < 120; a++)
	{
	  
	    C[a][a]=C[a-2][a]+B[a]*D[a]/A[a];
	  
	    D[a]=D[a+1]-21;
	}

    return 0;
}