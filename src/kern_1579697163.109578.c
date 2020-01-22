#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(490, 380, "ones");

	for (int c = 3; c < 380; c++)
	  for (int b = 0; b < 490; b++)
	    for (int a = 0; a < 490; a++)
	    {
	      
	      A[a][b]=A[a][b-3]+42;
	    }

    return 0;
}