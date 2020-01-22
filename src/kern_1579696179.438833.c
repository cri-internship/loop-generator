#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(110, "ones");
	int *A = create_one_dim_int(450, "ones");
	int ***D = create_three_dim_int(510, 580, 220, "ones");
	int **C = create_two_dim_int(740, 250, "ones");

	for (int a = 5; a < 510; a++)
	{
	  
	    D[a][a][a]=D[a-5][a-3][a-5]*15;
	}

    return 0;
}