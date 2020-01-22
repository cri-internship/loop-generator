#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(700, "random");

	for (int a = 4; a < 700; a++)
	{
	  
	    A[a]=27;
	    A[a]=29;
	  
	    int var_a=A[a]*33;
	    int var_b=A[a-4]+9;
	}

    return 0;
}