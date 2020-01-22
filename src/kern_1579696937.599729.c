#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(880, "ones");
	int **B = create_two_dim_int(550, 250, "ones");

	for (int a = 1; a < 550; a++)
	{
	  
	    int var_a=B[a][a]*25;
	    int var_b=B[a][a-1]/21;
	}

    return 0;
}