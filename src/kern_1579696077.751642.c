#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(400, 970, "ones");
	int **D = create_two_dim_int(470, 630, "ones");
	int **C = create_two_dim_int(640, 310, "ones");
	int *A = create_one_dim_int(570, "ones");

	for (int c = 2; c < 310; c++)
	  for (int b = 5; b < 640; b++)
	    for (int a = 5; a < 640; a++)
	    {
	      
	      C[a][b]=C[a-2][b-1]+34;
	      
	      C[a][b]=42;
	    }

    return 0;
}