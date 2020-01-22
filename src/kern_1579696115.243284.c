#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(660, "ones");
	int *B = create_one_dim_int(290, "ones");

	for (int b = 4; b < 286; b++)
	  for (int a = 4; a < 286; a++)
	  {
	    
	     B[a]=B[a-1]+A[a];
	    
	     B[a]=B[a-4]+21;
	    
	     B[a]=B[a+4]+A[a];
	    
	     A[a]=A[a+3]*35;
	    
	     A[a]=A[a+4]-B[a];
	  }

    return 0;
}