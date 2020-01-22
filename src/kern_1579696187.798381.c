#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(430, "zeros");
	int **A = create_two_dim_int(790, 560, "zeros");

	for (int a = 3; a < 427; a++)
	{
	  
	    A[a][a]=A[a-1][a-3]-B[a];
	  
	    B[a]=B[a-1]+38;
	  
	    B[a]=B[a+3]+A[a][a];
	}

    return 0;
}