#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(20, "ones");

	for (int b = 0; b < 19; b++)
	  for (int a = 0; a < 19; a++)
	  {
	    
	     A[a]=A[a+1]-41;
	  }

    return 0;
}