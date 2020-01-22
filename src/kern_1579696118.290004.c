#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(940, 290, "ones");
	int *C = create_one_dim_int(160, "ones");
	int **B = create_two_dim_int(900, 880, "ones");

	for (int c = 4; c < 290; c++)
	  for (int b = 4; b < 900; b++)
	    for (int a = 4; a < 900; a++)
	    {
	      
	      B[a][b]=B[a-1][b-1]/26;
	      
	      A[a][b]=A[a-4][b-4]*46;
	    }

    return 0;
}