#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(910, 160, 320, "random");
	int **B = create_two_dim_int(950, 20, "random");
	int **A = create_two_dim_int(690, 930, "random");

	for (int a = 3; a < 950; a++)
	{
	  
	    B[a][a]=C[a][a][a]+28;
	    B[a-3][a-1]=A[a][a]/C[a][a][a];
	}

    return 0;
}