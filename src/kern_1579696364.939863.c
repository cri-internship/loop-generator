#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(360, 960, "random");
	int **A = create_two_dim_int(650, 250, "random");
	int *B = create_one_dim_int(470, "random");
	int ***D = create_three_dim_int(610, 450, 100, "random");
	int **C = create_two_dim_int(310, 110, "random");

	for (int a = 5; a < 310; a++)
	{
	  
	    B[a]=B[a-5]+D[a][a][a]-A[a][a]/E[a][a];
	  
	    A[a][a]=A[a-2][a]-B[a]/C[a][a]+B[a];
	  
	    C[a][a]=D[a][a][a]+B[a]-A[a][a];
	    C[a-1][a-3]=50+B[a];
	  
	    A[a][a]=D[a][a][a]-E[a][a]+C[a][a]/A[a][a]*B[a];
	    B[a]=D[a+3][a+4][a]-C[a][a]+19;
	}

    return 0;
}