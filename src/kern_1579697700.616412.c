#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(690, "random");
	int *B = create_one_dim_int(510, "random");

	for (int a = 1; a < 510; a++)
	{
	  
	    B[a]=B[a-1]*A[a];
	}

    return 0;
}