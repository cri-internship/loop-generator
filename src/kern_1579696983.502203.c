#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(580, 600, 280, "zeros");
	float ***C = create_three_dim_float(790, 690, 130, "zeros");
	float *B = create_one_dim_float(110, "zeros");

	for (int c = 2; c < 105; c++)
	  for (int b = 2; b < 105; b++)
	    for (int a = 2; a < 105; a++)
	    {
	      
	      B[a]=B[a-2]/0.198;
	      
	      B[a]=0.746;
	    }

    return 0;
}