#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(740, "zeros");
	int **E = create_two_dim_int(360, 680, "zeros");
	int *B = create_one_dim_int(210, "zeros");
	int **A = create_two_dim_int(740, 730, "zeros");
	int ***C = create_three_dim_int(180, 810, 180, "zeros");

	for (int a = 1; a < 210; a++)
	{
	  
	    B[a]=B[a-1]+10;
	  
	    D[a]=B[a];
	    D[a-1]=A[a][a]/C[a][a][a]*C[a][a][a]-A[a][a];
	  
	    E[a][a]=E[a][a]/D[a]-B[a]+C[a][a][a];
	    C[a][a][a]=E[a+1][a+2]+C[a][a][a];
	}

    return 0;
}