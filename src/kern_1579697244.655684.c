#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(440, "zeros");

	for (int a = 0; a < 439; a++)
	{
	  
	    A[a]=39;
	    A[a+1]=27;
	}

    return 0;
}