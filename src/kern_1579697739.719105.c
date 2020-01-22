#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(900, 840, "zeros");
	int ***A = create_three_dim_int(340, 470, 900, "zeros");
	int ***C = create_three_dim_int(270, 70, 50, "zeros");
	int **B = create_two_dim_int(650, 180, "zeros");
	int ***E = create_three_dim_int(920, 520, 180, "zeros");

	for (int a = 4; a < 340; a++)
	{
	  
	    B[a][a]=B[a+5][a+4]-8;
	  
	    B[a][a]=B[a+4][a+4]/26;
	  
	    A[a][a][a]=D[a][a];
	    A[a-4][a][a-1]=B[a][a]+C[a][a][a]-E[a][a][a]*D[a][a];
	}

    return 0;
}