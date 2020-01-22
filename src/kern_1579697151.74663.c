#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(680, "random");
	int **B = create_two_dim_int(220, 380, "random");

	for (int c = 0; c < 380; c++)
	  for (int b = 4; b < 220; b++)
	    for (int a = 4; a < 220; a++)
	    {
	      
	      B[a][b]=48;
	      B[a-4][b]=34;
	    }

    return 0;
}