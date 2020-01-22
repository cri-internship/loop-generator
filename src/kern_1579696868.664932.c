#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(770, 130, "ones");
	int *B = create_one_dim_int(630, "ones");

	for (int a = 0; a < 625; a++)
	{
	  
	    A[a][a]=B[a]*A[a][a];
	    B[a]=A[a][a];
	  
	    B[a]=B[a+5]+10;
	}

    return 0;
}