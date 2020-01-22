#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(660, 110, 840, "zeros");
	int *A = create_one_dim_int(310, "zeros");
	int ***E = create_three_dim_int(130, 780, 990, "zeros");
	int **C = create_two_dim_int(200, 1000, "zeros");
	int ***B = create_three_dim_int(190, 240, 330, "zeros");

	for (int a = 3; a < 125; a++)
	{
	  
	    B[a][a][a]=B[a+1][a+3][a+3]-A[a];
	  
	    E[a][a][a]=E[a][a+3][a+5]/D[a][a][a]-C[a][a];
	  
	    E[a][a][a]=E[a+1][a][a+3]+34;
	  
	    D[a][a][a]=D[a+1][a+5][a+1]/2;
	  
	    D[a][a][a]=E[a][a][a]+A[a]/C[a][a]-B[a][a][a];
	  
	    D[a][a][a]=B[a][a][a]*D[a][a][a]-15;
	    C[a][a]=B[a-1][a-3][a]*A[a]/D[a][a][a]-C[a][a]+E[a][a][a];
	}

    return 0;
}