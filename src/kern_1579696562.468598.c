#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(180, 820, "ones");
	int **A = create_two_dim_int(870, 870, "ones");

	for (int a = 4; a < 866; a++)
	{
	  
	    A[a][a]=A[a-1][a-4]+6;
	  
	    A[a][a]=A[a][a]+22;
	    B[a][a]=A[a][a+4]+B[a][a];
	}

    return 0;
}