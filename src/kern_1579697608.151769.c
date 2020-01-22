#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(350, 230, "random");

	for (int d = 0; d < 228; d++)
	  for (int c = 0; c < 350; c++)
	    for (int b = 0; b < 350; b++)
	      for (int a = 0; a < 350; a++)
	      {
	        
	       A[a][b]=A[a][b+2]/0.61;
	      }

    return 0;
}