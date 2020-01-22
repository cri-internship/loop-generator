#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(20, 540, "zeros");
	int ***C = create_three_dim_int(320, 210, 990, "zeros");
	int ***B = create_three_dim_int(150, 790, 850, "zeros");
	int *A = create_one_dim_int(910, "zeros");

	for (int a = 1; a < 146; a++)
	{
	  
	    B[a][a][a]=B[a][a][a-1]/4;
	  
	    B[a][a][a]=C[a][a][a]/A[a]-D[a][a];
	}

    return 0;
}