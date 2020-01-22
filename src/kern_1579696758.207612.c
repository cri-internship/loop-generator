#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(380, 940, "ones");
	int ***C = create_three_dim_int(240, 940, 460, "ones");
	int **A = create_two_dim_int(120, 430, "ones");
	int *D = create_one_dim_int(550, "ones");
	int **E = create_two_dim_int(750, 250, "ones");

	for (int a = 5; a < 380; a++)
	{
	  
	    B[a][a]=B[a-4][a-1]-22;
	  
	    B[a][a]=D[a]*C[a][a][a]+E[a][a];
	}

    return 0;
}