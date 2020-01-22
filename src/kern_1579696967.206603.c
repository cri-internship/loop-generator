#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(800, "zeros");

	for (int c = 3; c < 797; c++)
	  for (int b = 3; b < 797; b++)
	    for (int a = 3; a < 797; a++)
	    {
	      
	      A[a]=A[a-3]-38;
	      
	      A[a]=32;
	      
	      A[a]=A[a+3]*23;
	    }

    return 0;
}