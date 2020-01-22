#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(510, 160, 200, "ones");
	int *B = create_one_dim_int(480, "ones");

	for (int a = 4; a < 478; a++)
	{
	  
	    B[a]=A[a][a][a];
	    B[a+2]=A[a][a][a];
	  
	    B[a]=A[a][a][a]/B[a];
	    A[a][a][a]=A[a-3][a-4][a-1]+30;
	}

    return 0;
}