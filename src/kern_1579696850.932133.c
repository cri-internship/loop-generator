#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(150, "random");

	for (int a = 4; a < 147; a++)
	{
	  
	    A[a]=A[a-4]+21;
	  
	    A[a]=36;
	}

    return 0;
}