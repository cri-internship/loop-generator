#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(700, 830, 400, "ones");
	float *A = create_one_dim_float(330, "ones");

	for (int c = 0; c < 327; c++)
	  for (int b = 0; b < 327; b++)
	    for (int a = 0; a < 327; a++)
	    {
	      
	      A[a]=A[a+3]*0.212;
	    }

    return 0;
}