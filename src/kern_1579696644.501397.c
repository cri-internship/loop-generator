#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(360, 410, 560, "ones");
	float *B = create_one_dim_float(950, "ones");

	for (int c = 0; c < 945; c++)
	  for (int b = 0; b < 945; b++)
	    for (int a = 0; a < 945; a++)
	    {
	      
	      B[a]=B[a+5]*0.742;
	    }

    return 0;
}