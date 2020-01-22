#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(160, "ones");
	int **B = create_two_dim_int(970, 270, "ones");
	int *C = create_one_dim_int(900, "ones");

	for (int b = 0; b < 896; b++)
	  for (int a = 0; a < 896; a++)
	  {
	    
	     C[a]=C[a]+B[a][b]/A[a];
	     B[a][b]=C[a+4]-B[a][b]+A[a];
	  }

    return 0;
}