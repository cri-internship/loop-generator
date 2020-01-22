#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(770, "ones");
	int **A = create_two_dim_int(200, 740, "ones");

	for (int a = 5; a < 200; a++)
	{
	  
	    A[a][a]=A[a-5][a]-B[a];
	  
	    A[a][a]=A[a-4][a-2]*35;
	  
	    B[a]=B[a+2]*A[a][a];
	  
	    B[a]=A[a][a];
	}

    return 0;
}