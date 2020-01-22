#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(800, "ones");
	int **B = create_two_dim_int(520, 410, "ones");
	int ***E = create_three_dim_int(550, 510, 240, "ones");
	int ***C = create_three_dim_int(940, 150, 360, "ones");
	int *D = create_one_dim_int(520, "ones");

	for (int a = 5; a < 520; a++)
	{
	  
	    A[a]=A[a-5]*36;
	  
	    A[a]=D[a]*C[a][a][a]+A[a]/E[a][a][a]-7;
	    D[a]=B[a][a]/A[a]+C[a][a][a]-E[a][a][a];
	}

    return 0;
}