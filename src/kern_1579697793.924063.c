#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(900, 450, "random");

	for (int c = 0; c < 450; c++)
	  for (int b = 3; b < 900; b++)
	    for (int a = 3; a < 900; a++)
	    {
	      
	      A[a][b]=A[a-3][b]/28;
	    }

    return 0;
}