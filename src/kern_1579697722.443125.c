#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(440, "ones");
	int *B = create_one_dim_int(470, "ones");
	int *A = create_one_dim_int(830, "ones");

	for (int c = 2; c < 467; c++)
	  for (int b = 2; b < 467; b++)
	    for (int a = 2; a < 467; a++)
	    {
	      
	      A[a]=A[a+1]*B[a];
	      
	      B[a]=B[a+3]-1;
	      
	      A[a]=A[a+4]/21;
	      
	      B[a]=B[a+1]-13;
	    }

    return 0;
}