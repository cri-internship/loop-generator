#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(420, "random");

	for (int c = 4; c < 420; c++)
	  for (int b = 4; b < 420; b++)
	    for (int a = 4; a < 420; a++)
	    {
	      
	      A[a]=A[a-4]*35;
	    }

    return 0;
}