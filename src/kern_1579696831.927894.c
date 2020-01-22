#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(360, "ones");
	int *A = create_one_dim_int(750, "ones");
	int *B = create_one_dim_int(390, "ones");

	for (int c = 3; c < 360; c++)
	  for (int b = 3; b < 360; b++)
	    for (int a = 3; a < 360; a++)
	    {
	      
	      C[a]=A[a]-B[a];
	      C[a]=A[a]+B[a];
	    }

    return 0;
}