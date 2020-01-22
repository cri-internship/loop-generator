#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(160, "random");
	int *B = create_one_dim_int(30, "random");

	for (int c = 5; c < 30; c++)
	  for (int b = 5; b < 30; b++)
	    for (int a = 5; a < 30; a++)
	    {
	      
	      A[a]=A[a+3]-3;
	      
	      A[a]=11;
	      
	      B[a]=42;
	      B[a-2]=11;
	    }

    return 0;
}