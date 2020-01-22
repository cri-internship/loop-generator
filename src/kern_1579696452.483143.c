#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(920, 850, "random");
	int **D = create_two_dim_int(590, 90, "random");
	int *C = create_one_dim_int(890, "random");
	int ***B = create_three_dim_int(480, 20, 970, "random");

	for (int a = 5; a < 586; a++)
	{
	  
	    D[a][a]=D[a-5][a-3]-8;
	  
	    D[a][a]=D[a+4][a+3]*1;
	  
	    C[a]=A[a][a]/D[a][a]+B[a][a][a]-9;
	    D[a][a]=A[a-5][a-5]-B[a][a][a];
	}

    return 0;
}