#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(20, 20, "ones");
	int **A = create_two_dim_int(110, 900, "ones");
	int ***B = create_three_dim_int(630, 700, 600, "ones");

	for (int a = 0; a < 105; a++)
	{
	  
	    A[a][a]=A[a+4][a+1]*42;
	  
	    A[a][a]=A[a+5][a+5]/21;
	}

    return 0;
}