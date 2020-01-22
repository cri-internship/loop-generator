#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(100, "random");

	for (int d = 5; d < 100; d++)
	  for (int c = 5; c < 100; c++)
	    for (int b = 5; b < 100; b++)
	      for (int a = 5; a < 100; a++)
	      {
	        
	       A[a]=A[a-5]+0.656;
	      }

    return 0;
}