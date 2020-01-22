#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(440, 30, 350, "zeros");
	int **C = create_two_dim_int(760, 150, "zeros");
	int ***A = create_three_dim_int(930, 460, 580, "zeros");
	int ***B = create_three_dim_int(900, 490, 140, "zeros");
	int **E = create_two_dim_int(440, 690, "zeros");

	for (int a = 3; a < 440; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-3][a]-C[a][a]+E[a][a]/B[a][a][a]*A[a][a][a];
	  
	    B[a][a][a]=D[a][a][a];
	    B[a+2][a+2][a]=D[a][a][a]*C[a][a]+E[a][a];
	  
	    A[a][a][a]=33;
	    A[a+4][a+4][a+1]=12;
	}

    return 0;
}