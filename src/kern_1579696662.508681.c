#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(50, 110, 490, "ones");
	int **A = create_two_dim_int(510, 860, "ones");

	for (int a = 5; a < 50; a++)
	{
	  
	    A[a][a]=A[a+3][a+2]-27;
	  
	    B[a][a][a]=5;
	    B[a-3][a-1][a-5]=27;
	}

    return 0;
}