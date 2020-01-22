#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(580, "ones");
	float *A = create_one_dim_float(690, "ones");

	for (int c = 2; c < 576; c++)
	  for (int b = 2; b < 576; b++)
	    for (int a = 2; a < 576; a++)
	    {
	      
	      B[a]=B[a-2]+0.915;
	      
	      B[a]=B[a+4]+0.873;
	      
	      float var_a=A[a]+0.671;
	      float var_b=A[a+1]/0.852;
	    }

    return 0;
}