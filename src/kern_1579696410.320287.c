#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(130, "ones");

	for (int c = 0; c < 129; c++)
	  for (int b = 0; b < 129; b++)
	    for (int a = 0; a < 129; a++)
	    {
	      
	      A[a]=A[a+1]-11;
	    }

    return 0;
}