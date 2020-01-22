#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(300, "random");
	int *B = create_one_dim_int(380, "random");

	for (int c = 3; c < 300; c++)
	  for (int b = 3; b < 300; b++)
	    for (int a = 3; a < 300; a++)
	    {
	      
	      A[a]=A[a-3]+39;
	      
	      A[a]=B[a];
	    }

    return 0;
}