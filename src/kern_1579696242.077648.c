#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(480, 700, "ones");

	for (int a = 0; a < 476; a++)
	{
	  
	    A[a][a]=A[a+3][a+4]*33;
	}

    return 0;
}