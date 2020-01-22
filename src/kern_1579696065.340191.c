#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(420, 100, "random");

	for (int a = 0; a < 416; a++)
	{
	  
	    A[a][a]=A[a+1][a+4]*5;
	}

    return 0;
}