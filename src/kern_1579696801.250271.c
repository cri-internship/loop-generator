#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(330, "ones");
	int **A = create_two_dim_int(780, 100, "ones");

	for (int c = 3; c < 330; c++)
	  for (int b = 3; b < 330; b++)
	    for (int a = 3; a < 330; a++)
	    {
	      
	      B[a]=A[a][b];
	      B[a-3]=A[a][b];
	    }

    return 0;
}