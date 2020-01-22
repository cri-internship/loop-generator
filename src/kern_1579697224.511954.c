#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(440, 880, 910, "zeros");
	int **D = create_two_dim_int(750, 140, "zeros");
	int ***C = create_three_dim_int(160, 290, 50, "zeros");
	int **E = create_two_dim_int(490, 990, "zeros");
	int *A = create_one_dim_int(210, "zeros");

	for (int a = 4; a < 485; a++)
	{
	  
	    D[a][a]=D[a-1][a-4]+C[a][a][a]/A[a]*16-B[a][a][a];
	  
	    D[a][a]=D[a+5][a+1]/A[a]+C[a][a][a]-E[a][a];
	  
	    E[a][a]=E[a+1][a+5]*5;
	}

    return 0;
}