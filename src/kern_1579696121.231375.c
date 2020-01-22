#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(680, 280, "random");

	for (int a = 5; a < 680; a++)
	{
	  
	    A[a][a]=A[a-5][a-1]-31;
	}

    return 0;
}