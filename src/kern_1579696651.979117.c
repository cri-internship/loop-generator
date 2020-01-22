#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(710, 720, "random");

	for (int c = 0; c < 718; c++)
	  for (int b = 0; b < 707; b++)
	    for (int a = 0; a < 707; a++)
	    {
	      
	      A[a][b]=A[a+3][b+2]*49;
	    }

    return 0;
}