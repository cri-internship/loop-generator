#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(310, 190, "zeros");
	int **C = create_two_dim_int(210, 300, "zeros");
	int *B = create_one_dim_int(540, "zeros");

	for (int c = 5; c < 540; c++)
	  for (int b = 5; b < 540; b++)
	    for (int a = 5; a < 540; a++)
	    {
	      
	      B[a]=A[a][b]+C[a][b];
	      B[a-5]=C[a][b];
	    }

    return 0;
}