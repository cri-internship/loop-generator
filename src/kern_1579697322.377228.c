#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(120, 800, 870, "ones");
	int **A = create_two_dim_int(460, 580, "ones");
	int **E = create_two_dim_int(160, 870, "ones");
	int *B = create_one_dim_int(70, "ones");
	int ***D = create_three_dim_int(370, 530, 490, "ones");

	for (int a = 1; a < 120; a++)
	{
	  
	    A[a][a]=A[a+2][a+3]-B[a]+E[a][a]/D[a][a][a]*C[a][a][a];
	  
	    C[a][a][a]=34;
	    C[a][a][a-1]=42;
	  
	    D[a][a][a]=3;
	    D[a+5][a+2][a+1]=41;
	}

    return 0;
}