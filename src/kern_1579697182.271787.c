#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(890, 270, "ones");
	int *A = create_one_dim_int(720, "ones");

	for (int a = 0; a < 716; a++)
	{
	  
	    A[a]=A[a+4]*B[a][a];
	}

    return 0;
}