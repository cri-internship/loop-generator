#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(780, "ones");
	int *B = create_one_dim_int(580, "ones");
	int *A = create_one_dim_int(880, "ones");

	for (int c = 0; c < 775; c++)
	  for (int b = 0; b < 775; b++)
	    for (int a = 0; a < 775; a++)
	    {
	      
	      C[a]=C[a+5]+B[a]-A[a];
	      
	      C[a]=C[a+4]+50;
	      
	      C[a]=C[a]-B[a];
	      B[a]=C[a+2]*A[a]-B[a];
	    }

    return 0;
}