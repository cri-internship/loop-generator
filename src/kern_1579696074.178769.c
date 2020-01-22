#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(440, 310, 140, "ones");
	int **B = create_two_dim_int(290, 360, "ones");
	int *D = create_one_dim_int(780, "ones");
	int **A = create_two_dim_int(450, 590, "ones");

	for (int a = 0; a < 445; a++)
	{
	  
	    A[a][a]=28;
	    A[a+5][a+2]=22;
	}

    return 0;
}