#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(550, "zeros");
	int **B = create_two_dim_int(100, 660, "zeros");

	for (int c = 2; c < 547; c++)
	  for (int b = 2; b < 547; b++)
	    for (int a = 2; a < 547; a++)
	    {
	      
	      A[a]=A[a-2]-43;
	      
	      A[a]=A[a+3]+17;
	    }

    return 0;
}