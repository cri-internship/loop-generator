#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(180, "zeros");
	int *A = create_one_dim_int(400, "zeros");

	for (int c = 2; c < 180; c++)
	  for (int b = 2; b < 180; b++)
	    for (int a = 2; a < 180; a++)
	    {
	      
	      B[a]=A[a];
	      B[a-1]=A[a];
	      
	      A[a]=A[a]+B[a];
	      B[a]=A[a-2]*35;
	    }

    return 0;
}