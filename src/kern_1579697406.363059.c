#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(970, "ones");
	float **A = create_two_dim_float(490, 360, "ones");

	for (int b = 3; b < 970; b++)
	  for (int a = 3; a < 970; a++)
	  {
	    
	     B[a]=B[a-3]/A[a][b];
	    
	     B[a]=A[a][b];
	  }

    return 0;
}