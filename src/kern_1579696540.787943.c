#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(350, 170, "ones");
	int *B = create_one_dim_int(710, "ones");

	for (int a = 0; a < 345; a++)
	{
	  
	    A[a][a]=A[a+1][a+5]-3;
	}

    return 0;
}