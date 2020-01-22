#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(370, "random");

	for (int a = 2; a < 369; a++)
	{
	  
	    A[a]=A[a+1]-3;
	  
	    A[a]=15;
	}

    return 0;
}