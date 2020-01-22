#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(970, 870, "random");
	int ***A = create_three_dim_int(970, 100, 440, "random");
	int *C = create_one_dim_int(580, "random");

	for (int c = 0; c < 440; c++)
	  for (int b = 3; b < 100; b++)
	    for (int a = 1; a < 580; a++)
	    {
	      
	      A[a][b][c]=38;
	      A[a-1][b-3][c]=19;
	      
	      C[a]=24;
	      C[a]=14;
	    }

    return 0;
}