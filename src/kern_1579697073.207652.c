#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(350, 670, "random");
	int ***C = create_three_dim_int(200, 960, 790, "random");
	int *D = create_one_dim_int(860, "random");
	int **B = create_two_dim_int(780, 710, "random");

	for (int a = 2; a < 780; a++)
	{
	  
	    B[a][a]=B[a-2][a-1]*10;
	}

    return 0;
}