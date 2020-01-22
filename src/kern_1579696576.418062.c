#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(50, "random");

	for (int b = 5; b < 46; b++)
	  for (int a = 5; a < 46; a++)
	  {
	    
	     A[a]=A[a-5]/0.812;
	    
	     A[a]=A[a+4]-0.637;
	  }

    return 0;
}