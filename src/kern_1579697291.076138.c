#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(50, 310, 430, "ones");

	for (int a = 0; a < 46; a++)
	{
	  
	    A[a][a][a]=40;
	    A[a][a+4][a+1]=41;
	}

    return 0;
}