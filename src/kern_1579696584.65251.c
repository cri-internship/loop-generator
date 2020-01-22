#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(280, "ones");
	int *C = create_one_dim_int(920, "ones");
	int *A = create_one_dim_int(350, "ones");

	for (int c = 3; c < 350; c++)
	  for (int b = 3; b < 350; b++)
	    for (int a = 3; a < 350; a++)
	    {
	      
	      C[a]=C[a-2]-31;
	      
	      A[a]=C[a];
	      A[a]=B[a]/12;
	      
	      B[a]=A[a]/C[a]+B[a];
	      A[a]=A[a-3]*C[a]/B[a];
	    }

    return 0;
}