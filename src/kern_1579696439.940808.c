#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(520, "ones");

	for (int c = 0; c < 515; c++)
	  for (int b = 0; b < 515; b++)
	    for (int a = 0; a < 515; a++)
	    {
	      
	      A[a]=A[a+5]/0.244;
	    }

    return 0;
}