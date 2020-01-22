#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(830, "random");

	for (int c = 0; c < 826; c++)
	  for (int b = 0; b < 826; b++)
	    for (int a = 0; a < 826; a++)
	    {
	      
	      A[a]=13;
	      A[a+4]=41;
	    }

    return 0;
}