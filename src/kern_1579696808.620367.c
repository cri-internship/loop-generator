#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(90, 520, "ones");

	for (int c = 4; c < 520; c++)
	  for (int b = 2; b < 90; b++)
	    for (int a = 2; a < 90; a++)
	    {
	      
	      A[a][b]=22;
	      A[a-2][b-4]=39;
	    }

    return 0;
}