#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(500, 300, "random");
	int *D = create_one_dim_int(500, "random");
	int ***E = create_three_dim_int(170, 260, 700, "random");
	int ***C = create_three_dim_int(550, 590, 640, "random");
	int **B = create_two_dim_int(560, 520, "random");

	for (int a = 3; a < 170; a++)
	{
	  
	    D[a]=D[a-3]*E[a][a][a]-C[a][a][a];
	  
	    A[a][a]=A[a+1][a+4]/D[a]-B[a][a]+C[a][a][a]*E[a][a][a];
	  
	    int var_a=E[a][a][a]*8;
	    int var_b=E[a-1][a][a]+50;
	}

    return 0;
}