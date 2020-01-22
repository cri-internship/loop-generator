#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(100, "ones");
	int *B = create_one_dim_int(410, "ones");

	for (int a = 0; a < 97; a++)
	{
	  
	    B[a]=B[a+2]-12;
	  
	    A[a]=A[a]*B[a];
	    B[a]=A[a+3]/B[a];
	}

    return 0;
}