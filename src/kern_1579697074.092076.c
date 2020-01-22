#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(770, "ones");
	int *C = create_one_dim_int(710, "ones");
	int *B = create_one_dim_int(960, "ones");

	for (int b = 0; b < 707; b++)
	  for (int a = 0; a < 707; a++)
	  {
	    
	     C[a]=C[a+3]*21;
	    
	     A[a]=A[a+2]+C[a]*B[a];
	  }

    return 0;
}