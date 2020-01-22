#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(400, 560, "random");
	int *C = create_one_dim_int(310, "random");
	int *B = create_one_dim_int(800, "random");

	for (int c = 0; c < 557; c++)
	  for (int b = 0; b < 399; b++)
	    for (int a = 0; a < 399; a++)
	    {
	      
	      B[a]=A[a][b]-B[a];
	      A[a][b]=A[a+1][b+3]*17;
	    }

    return 0;
}