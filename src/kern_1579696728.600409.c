#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(680, "ones");

	for (int a = 0; a < 676; a++)
	{
	  
	    A[a]=2;
	    A[a+4]=29;
	}

    return 0;
}