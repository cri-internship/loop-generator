#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(420, 280, "zeros");
	int ***B = create_three_dim_int(400, 660, 200, "zeros");
	int *C = create_one_dim_int(40, "zeros");
	int ***D = create_three_dim_int(870, 650, 60, "zeros");

	for (int a = 4; a < 396; a++)
	{
	  
	    D[a][a][a]=D[a-4][a-1][a-2]+18;
	  
	    B[a][a][a]=14;
	    B[a+2][a+4][a]=48;
	}

    return 0;
}