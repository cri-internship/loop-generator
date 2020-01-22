#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(160, "random");

	for (int c = 4; c < 157; c++)
	  for (int b = 4; b < 157; b++)
	    for (int a = 4; a < 157; a++)
	    {
	      
	      A[a]=A[a-1]+0.051;
	      
	      A[a]=0.806;
	      
	      A[a]=A[a+3]*0.307;
	    }

    return 0;
}