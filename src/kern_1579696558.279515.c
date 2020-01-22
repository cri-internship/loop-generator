#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(700, 220, 130, "zeros");
	int **A = create_two_dim_int(490, 840, "zeros");
	int *B = create_one_dim_int(650, "zeros");
	int ***D = create_three_dim_int(530, 330, 790, "zeros");

	for (int a = 0; a < 528; a++)
	{
	  
	    D[a][a][a]=D[a+1][a+2][a+1]*32;
	}

    return 0;
}