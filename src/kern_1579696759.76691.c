#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(340, "random");
	int ***B = create_three_dim_int(800, 90, 660, "random");
	int **C = create_two_dim_int(420, 250, "random");
	int *E = create_one_dim_int(650, "random");
	int *D = create_one_dim_int(270, "random");

	for (int a = 5; a < 335; a++)
	{
	  
	    A[a]=A[a+5]+D[a]/B[a][a][a]*C[a][a];
	  
	    E[a]=A[a]/C[a][a]-D[a];
	    E[a-5]=D[a]/46+A[a]-B[a][a][a];
	  
	    E[a]=25;
	}

    return 0;
}