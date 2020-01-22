#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(800, 440, "random");
	int *A = create_one_dim_int(420, "random");

	for (int c = 2; c < 440; c++)
	  for (int b = 1; b < 416; b++)
	    for (int a = 1; a < 416; a++)
	    {
	      
	      B[a][b]=B[a-1][b-2]-24;
	      
	      A[a]=A[a-1]+1;
	      
	      A[a]=A[a+4]-8;
	    }

    return 0;
}