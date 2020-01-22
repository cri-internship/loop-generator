#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(450, 610, "ones");
	int ***B = create_three_dim_int(870, 880, 200, "ones");

	for (int a = 5; a < 445; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-1][a-3]-14;
	  
	    A[a][a]=A[a-1][a-2]/B[a][a][a];
	  
	    A[a][a]=A[a-4][a-5]/B[a][a][a];
	}

    return 0;
}