#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(690, "ones");
	int *A = create_one_dim_int(560, "ones");

	for (int a = 0; a < 686; a++)
	{
	  
	    B[a]=B[a]+A[a];
	    A[a]=B[a+4]+20;
	}

    return 0;
}