#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(200, "ones");
	int **B = create_two_dim_int(500, 700, "ones");

	for (int c = 3; c < 700; c++)
	  for (int b = 4; b < 500; b++)
	    for (int a = 4; a < 500; a++)
	    {
	      
	      B[a][b]=A[a];
	      B[a-4][b-3]=A[a];
	    }

    return 0;
}