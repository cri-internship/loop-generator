#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(730, 870, "random");
	int ***C = create_three_dim_int(370, 1000, 100, "random");
	int ***B = create_three_dim_int(850, 380, 400, "random");
	int ***D = create_three_dim_int(780, 360, 400, "random");

	for (int a = 4; a < 365; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-1][a]*15;
	  
	    A[a][a]=A[a+4][a+3]*B[a][a][a]-D[a][a][a]/C[a][a][a];
	  
	    A[a][a]=34;
	  
	    int var_a=C[a][a][a]/32;
	    int var_b=C[a+5][a+2][a+3]+13;
	  
	    B[a][a][a]=B[a][a][a]+A[a][a]*D[a][a][a];
	    C[a][a][a]=B[a+3][a][a]-C[a][a][a]/A[a][a];
	  
	    A[a][a]=D[a][a][a]-B[a][a][a]*C[a][a][a];
	    D[a][a][a]=D[a+4][a+2][a+1]*11;
	}

    return 0;
}