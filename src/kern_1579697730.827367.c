#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(80, "ones");

	for (int c = 1; c < 80; c++)
	  for (int b = 1; b < 80; b++)
	    for (int a = 1; a < 80; a++)
	    {
	      
	      A[a]=8;
	      A[a-1]=10;
	    }

    return 0;
}