#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(80, 250, "ones");
	int *B = create_one_dim_int(760, "ones");

	for (int c = 0; c < 250; c++)
	  for (int b = 1; b < 76; b++)
	    for (int a = 1; a < 76; a++)
	    {
	      
	      B[a]=B[a-1]*18;
	      
	      A[a][b]=41;
	      A[a+4][b]=42;
	    }

    return 0;
}