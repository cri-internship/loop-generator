#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(160, "ones");

	for (int c = 0; c < 156; c++)
	  for (int b = 0; b < 156; b++)
	    for (int a = 0; a < 156; a++)
	    {
	      
	      A[a]=A[a+4]*0.535;
	    }

    return 0;
}