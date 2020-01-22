#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(510, "random");
	int *B = create_one_dim_int(950, "random");

	for (int b = 3; b < 508; b++)
	  for (int a = 3; a < 508; a++)
	  {
	    
	     B[a]=B[a-3]/A[a];
	    
	     A[a]=A[a+2]*B[a];
	  }

    return 0;
}