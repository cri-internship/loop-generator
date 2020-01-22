#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(220, "zeros");

	for (int c = 0; c < 219; c++)
	  for (int b = 0; b < 219; b++)
	    for (int a = 0; a < 219; a++)
	    {
	      
	      A[a]=A[a+1]-31;
	    }

    return 0;
}