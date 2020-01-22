#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(840, 500, "zeros");
	int ***D = create_three_dim_int(280, 600, 890, "zeros");
	int ***B = create_three_dim_int(480, 750, 790, "zeros");
	int *E = create_one_dim_int(930, "zeros");
	int **A = create_two_dim_int(240, 620, "zeros");

	for (int a = 5; a < 236; a++)
	{
	  
	    D[a][a][a]=D[a-2][a-5][a-3]-B[a][a][a];
	  
	    A[a][a]=A[a+4][a]+D[a][a][a]/E[a];
	  
	    C[a][a]=E[a]*A[a][a]/C[a][a]+B[a][a][a]-D[a][a][a];
	    B[a][a][a]=E[a-4]/7-B[a][a][a]*C[a][a];
	}

    return 0;
}