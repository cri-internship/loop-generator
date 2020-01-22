#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(350, "zeros");
	int *A = create_one_dim_int(670, "zeros");
	int *B = create_one_dim_int(1000, "zeros");

	for (int c = 2; c < 670; c++)
	  for (int b = 2; b < 670; b++)
	    for (int a = 2; a < 670; a++)
	    {
	      
	      A[a]=A[a-2]+13;
	    }

    return 0;
}