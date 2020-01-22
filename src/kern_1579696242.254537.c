#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(370, "zeros");
	float **A = create_two_dim_float(670, 540, "zeros");

	for (int c = 2; c < 370; c++)
	  for (int b = 2; b < 370; b++)
	    for (int a = 2; a < 370; a++)
	    {
	      
	      B[a]=B[a-2]*0.105;
	    }

    return 0;
}