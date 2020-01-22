#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(10, "ones");
	int **A = create_two_dim_int(250, 410, "ones");

	for (int a = 5; a < 6; a++)
	{
	  
	    A[a][a]=A[a-1][a-5]-22;
	  
	    B[a]=B[a-4]+23;
	  
	    B[a]=B[a+4]/A[a][a];
	  
	    A[a][a]=A[a][a]-B[a];
	    B[a]=A[a+5][a]*B[a];
	}

    return 0;
}