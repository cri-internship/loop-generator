#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(660, 10, 870, "zeros");
	int ***C = create_three_dim_int(990, 810, 800, "zeros");
	int ***D = create_three_dim_int(980, 1000, 530, "zeros");
	int *B = create_one_dim_int(100, "zeros");
	int ***A = create_three_dim_int(390, 120, 580, "zeros");

	for (int a = 3; a < 100; a++)
	{
	  
	    A[a][a][a]=A[a][a-3][a-3]/C[a][a][a]*D[a][a][a];
	  
	    C[a][a][a]=C[a][a+5][a+5]+E[a][a][a];
	  
	    B[a]=A[a][a][a]*E[a][a][a]+A[a][a][a]/C[a][a][a];
	    B[a]=C[a][a][a]*D[a][a][a]+A[a][a][a];
	}

    return 0;
}