#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(920, 270, "zeros");
	int ***A = create_three_dim_int(540, 930, 990, "zeros");
	int ***B = create_three_dim_int(30, 220, 260, "zeros");
	int ***D = create_three_dim_int(880, 200, 60, "zeros");
	int ***E = create_three_dim_int(640, 350, 660, "zeros");

	for (int a = 3; a < 30; a++)
	{
	  
	    E[a][a][a]=E[a][a-2][a-3]+B[a][a][a];
	  
	    B[a][a][a]=B[a-3][a-1][a-2]-E[a][a][a]*C[a][a]/A[a][a][a]+D[a][a][a];
	  
	    E[a][a][a]=14;
	}

    return 0;
}