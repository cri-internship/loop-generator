#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(550, "random");
	int *A = create_one_dim_int(860, "random");
	int *D = create_one_dim_int(790, "random");
	int **C = create_two_dim_int(80, 390, "random");

	for (int a = 3; a < 76; a++)
	{
	  
	    A[a]=A[a+3]/C[a][a]*B[a]+D[a];
	  
	    C[a][a]=C[a+4][a+4]-7;
	  
	    C[a][a]=D[a]+42;
	    D[a]=41-A[a];
	  
	    A[a]=B[a]-C[a][a]+A[a]/39;
	    B[a]=B[a-3]-C[a][a];
	}

    return 0;
}