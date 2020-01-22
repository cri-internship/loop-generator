#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(800, "ones");
	int **A = create_two_dim_int(20, 450, "ones");

	for (int a = 4; a < 17; a++)
	{
	  
	    A[a][a]=A[a-2][a]+0;
	  
	    A[a][a]=A[a+1][a+3]/B[a];
	  
	    B[a]=B[a+4]/A[a][a];
	  
	    B[a]=18;
	}

    return 0;
}