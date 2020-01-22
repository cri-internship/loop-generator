#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(1000, 100, "random");
	int **A = create_two_dim_int(520, 780, "random");

	for (int c = 1; c < 100; c++)
	  for (int b = 4; b < 520; b++)
	    for (int a = 4; a < 520; a++)
	    {
	      
	      A[a][b]=A[a-4][b-1]-B[a][b];
	      
	      B[a][b]=48;
	      B[a-2][b-1]=49;
	    }

    return 0;
}