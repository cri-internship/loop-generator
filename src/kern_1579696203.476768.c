#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(740, 480, "random");
	int *A = create_one_dim_int(590, "random");
	int *E = create_one_dim_int(220, "random");
	int ***C = create_three_dim_int(540, 960, 740, "random");
	int *B = create_one_dim_int(350, "random");

	for (int a = 5; a < 540; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-4][a-5]-B[a]/A[a]+E[a]*D[a][a];
	  
	    A[a]=A[a+5]-42;
	  
	    A[a]=C[a][a][a]/28*A[a]-D[a][a];
	    B[a]=C[a-1][a-1][a-5]+E[a]/D[a][a];
	}

    return 0;
}