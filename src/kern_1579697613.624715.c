#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(410, 70, 550, "zeros");
	int *E = create_one_dim_int(790, "zeros");
	int ***D = create_three_dim_int(760, 770, 770, "zeros");
	int **A = create_two_dim_int(280, 960, "zeros");
	int **B = create_two_dim_int(600, 520, "zeros");

	for (int a = 0; a < 756; a++)
	{
	  
	    D[a][a][a]=D[a+4][a+3][a+4]*36;
	}

    return 0;
}