#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(600, "zeros");

	for (int c = 5; c < 600; c++)
	  for (int b = 5; b < 600; b++)
	    for (int a = 5; a < 600; a++)
	    {
	      
	      A[a]=A[a-1]*0.943;
	      
	      A[a]=A[a-5]*0.233;
	    }

    return 0;
}