#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(340, "random");
	int ***E = create_three_dim_int(500, 590, 890, "random");
	int ***C = create_three_dim_int(390, 360, 410, "random");
	int **A = create_two_dim_int(900, 550, "random");
	int **D = create_two_dim_int(990, 290, "random");

	for (int a = 3; a < 387; a++)
	{
	  
	    D[a][a]=D[a-3][a-1]/27;
	  
	    D[a][a]=D[a][a-1]/17;
	  
	    E[a][a][a]=C[a][a][a]*B[a];
	    A[a][a]=C[a+3][a][a+1]+D[a][a]-A[a][a]*E[a][a][a];
	}

    return 0;
}