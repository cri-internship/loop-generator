#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(500, "ones");
	int ***E = create_three_dim_int(740, 220, 120, "ones");
	int ***B = create_three_dim_int(770, 490, 10, "ones");
	int **D = create_two_dim_int(750, 400, "ones");
	int **C = create_two_dim_int(510, 620, "ones");

	for (int a = 0; a < 735; a++)
	{
	  
	    D[a][a]=D[a+2][a+4]-5;
	  
	    B[a][a][a]=B[a+3][a+1][a+3]-32;
	  
	    D[a][a]=44;
	  
	    D[a][a]=E[a][a][a]-B[a][a][a]*C[a][a];
	    A[a]=E[a][a+5][a+3]-D[a][a]+D[a][a];
	}

    return 0;
}