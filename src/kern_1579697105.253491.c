#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(840, 250, 390, "random");
	int *C = create_one_dim_int(140, "random");
	int **D = create_two_dim_int(880, 660, "random");
	int **B = create_two_dim_int(800, 960, "random");
	int *E = create_one_dim_int(150, "random");

	for (int a = 5; a < 840; a++)
	{
	  
	    D[a][a]=A[a][a][a]/B[a][a]-C[a]+E[a];
	    D[a-2][a-5]=E[a]-C[a];
	  
	    D[a][a]=E[a];
	  
	    A[a][a][a]=D[a][a]/B[a][a]*E[a];
	    A[a-3][a-1][a-4]=E[a]+D[a][a];
	}

    return 0;
}