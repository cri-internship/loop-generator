#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(60, 690, 10, "zeros");
	int **A = create_two_dim_int(190, 510, "zeros");
	int ***B = create_three_dim_int(720, 310, 870, "zeros");

	for (int a = 5; a < 190; a++)
	{
	  
	    A[a][a]=A[a-1][a-5]+0;
	}

    return 0;
}