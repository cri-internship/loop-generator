#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(730, 500, 640, "random");
	int **A = create_two_dim_int(50, 720, "random");
	int **D = create_two_dim_int(140, 420, "random");
	int *B = create_one_dim_int(650, "random");

	for (int a = 5; a < 50; a++)
	{
	  
	    D[a][a]=D[a-3][a-1]/41;
	  
	    A[a][a]=A[a-4][a-4]/15;
	  
	    C[a][a][a]=C[a+4][a+4][a+2]*5;
	  
	    D[a][a]=D[a][a]*B[a]/C[a][a][a];
	    A[a][a]=D[a+3][a+4]-A[a][a]/B[a]*C[a][a][a];
	  
	    C[a][a][a]=D[a][a]*A[a][a]/C[a][a][a]-B[a];
	    B[a]=D[a-1][a-2]-B[a];
	  
	    int var_a=D[a][a]+39;
	    int var_b=D[a-5][a-5]+10;
	}

    return 0;
}