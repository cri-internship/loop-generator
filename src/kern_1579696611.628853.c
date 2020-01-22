#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(240, "random");

	for (int c = 0; c < 240; c++)
	  for (int b = 0; b < 240; b++)
	    for (int a = 0; a < 240; a++)
	    {
	      
	      A[a]=50;
	      A[a]=32;
	    }

    return 0;
}