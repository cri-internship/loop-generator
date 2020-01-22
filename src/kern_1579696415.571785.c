#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(590, 790, 820, "random");

	for (int a = 4; a < 590; a++)
	{
	  
	    A[a][a][a]=35;
	    A[a-2][a-4][a-4]=5;
	}

    return 0;
}