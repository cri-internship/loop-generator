#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(410, "random");
	int **D = create_two_dim_int(430, 10, "random");
	int *E = create_one_dim_int(280, "random");
	int ***B = create_three_dim_int(340, 930, 530, "random");
	int *C = create_one_dim_int(80, "random");

	for (int a = 5; a < 336; a++)
	{
	  
	    A[a]=A[a-2]-D[a][a]+33*C[a]/E[a];
	  
	    B[a][a][a]=B[a+4][a+2][a+2]*2;
	  
	    D[a][a]=A[a]+E[a]*A[a]/C[a];
	    D[a+3][a+4]=A[a];
	  
	    E[a]=D[a][a]-A[a];
	    A[a]=D[a-5][a-4]-A[a]+C[a];
	}

    return 0;
}