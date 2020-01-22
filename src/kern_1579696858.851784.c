#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(840, 200, "zeros");
	int ***E = create_three_dim_int(650, 840, 340, "zeros");
	int **D = create_two_dim_int(800, 730, "zeros");
	int **C = create_two_dim_int(360, 690, "zeros");
	int *B = create_one_dim_int(210, "zeros");

	for (int a = 4; a < 206; a++)
	{
	  
	    A[a][a]=A[a-4][a-4]-D[a][a]+E[a][a][a]/C[a][a];
	  
	    C[a][a]=B[a]/A[a][a];
	    C[a-1][a]=A[a][a]+E[a][a][a]-B[a];
	  
	    B[a]=44;
	    B[a+4]=37;
	  
	    A[a][a]=A[a][a]-D[a][a]*C[a][a]/B[a];
	    E[a][a][a]=A[a+2][a+4]*D[a][a]-B[a]/E[a][a][a]+C[a][a];
	  
	    C[a][a]=C[a][a]/A[a][a]*B[a]-D[a][a]+E[a][a][a];
	    B[a]=C[a-3][a-1]-A[a][a]*E[a][a][a]+D[a][a]/B[a];
	}

    return 0;
}