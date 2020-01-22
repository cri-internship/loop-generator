#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(750, "ones");
	int *A = create_one_dim_int(190, "ones");

	for (int c = 0; c < 189; c++)
	  for (int b = 0; b < 189; b++)
	    for (int a = 0; a < 189; a++)
	    {
	      
	      A[a]=A[a+1]/B[a];
	    }

    return 0;
}