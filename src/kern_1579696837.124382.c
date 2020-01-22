#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(880, "zeros");

	for (int a = 4; a < 880; a++)
	{
	  
	    A[a]=A[a-2]+4;
	  
	    A[a]=A[a-4]/25;
	}

    return 0;
}