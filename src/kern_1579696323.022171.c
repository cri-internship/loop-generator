#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(970, "ones");

	for (int c = 2; c < 966; c++)
	  for (int b = 2; b < 966; b++)
	    for (int a = 2; a < 966; a++)
	    {
	      
	      A[a]=A[a-2]/0.123;
	      
	      A[a]=A[a+4]/0.996;
	    }

    return 0;
}