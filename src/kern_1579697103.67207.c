#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(110, 100, "random");
	int ***C = create_three_dim_int(990, 930, 880, "random");
	int *E = create_one_dim_int(350, "random");
	int *A = create_one_dim_int(730, "random");
	int ***D = create_three_dim_int(530, 980, 990, "random");

	for (int a = 4; a < 106; a++)
	{
	  
	    C[a][a][a]=C[a-3][a-1][a-2]+13;
	  
	    C[a][a][a]=D[a][a][a]-B[a][a];
	  
	    B[a][a]=7;
	    B[a+4][a+4]=33;
	  
	    E[a]=39;
	    E[a-4]=40;
	  
	    C[a][a][a]=E[a]/C[a][a][a]-D[a][a][a]+A[a]*B[a][a];
	    B[a][a]=E[a-1]-C[a][a][a]*D[a][a][a]/B[a][a]+A[a];
	  
	    D[a][a][a]=C[a][a][a]-D[a][a][a]/B[a][a];
	    A[a]=C[a][a+4][a+1]/36-D[a][a][a];
	}

    return 0;
}