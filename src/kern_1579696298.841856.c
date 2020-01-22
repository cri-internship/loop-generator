#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(770, 970, 750, "zeros");
	int **B = create_two_dim_int(400, 310, "zeros");
	int *A = create_one_dim_int(1000, "zeros");
	int *D = create_one_dim_int(870, "zeros");
	int **C = create_two_dim_int(390, 80, "zeros");

	for (int a = 4; a < 400; a++)
	{
	  
	    B[a][a]=B[a-4][a]*4;
	}

    return 0;
}