#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(490, "ones");
	int *A = create_one_dim_int(490, "ones");

	for (int b = 0; b < 490; b++)
	  for (int a = 0; a < 490; a++)
	  {
	    
	     A[a]=B[a];
	     A[a]=B[a];
	  }

    return 0;
}