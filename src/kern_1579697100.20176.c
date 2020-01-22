#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(70, 700, 850, "ones");
	int **A = create_two_dim_int(1000, 20, "ones");
	int **C = create_two_dim_int(440, 670, "ones");
	int **D = create_two_dim_int(880, 860, "ones");

	for (int a = 3; a < 66; a++)
	{
	  
	    D[a][a]=D[a-1][a-3]-B[a][a][a]+C[a][a];
	  
	    B[a][a][a]=B[a+4][a+2][a+3]/39;
	  
	    A[a][a]=D[a][a]*B[a][a][a]+C[a][a];
	    A[a-1][a-3]=D[a][a];
	}

    return 0;
}