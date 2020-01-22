#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(930, 990, 810, "random");
	int ***D = create_three_dim_int(690, 730, 980, "random");
	int **C = create_two_dim_int(510, 740, "random");
	int **B = create_two_dim_int(170, 140, "random");

	for (int a = 5; a < 165; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-3][a-5]+17;
	  
	    B[a][a]=B[a+3][a+5]+A[a][a][a]*C[a][a]-D[a][a][a];
	  
	    B[a][a]=D[a][a][a];
	  
	    D[a][a][a]=10;
	}

    return 0;
}