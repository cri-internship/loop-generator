#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(500, "zeros");
	int *D = create_one_dim_int(200, "zeros");
	int *C = create_one_dim_int(770, "zeros");
	int *A = create_one_dim_int(430, "zeros");

	for (int b = 2; b < 200; b++)
	  for (int a = 2; a < 200; a++)
	  {
	    
	     A[a]=A[a-1]-B[a]*D[a];
	    
	     D[a]=C[a]-39/A[a];
	     D[a-2]=A[a];
	  }

    return 0;
}