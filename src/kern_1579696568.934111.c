#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(250, 930, "random");

	for (int d = 5; d < 930; d++)
	  for (int c = 0; c < 250; c++)
	    for (int b = 0; b < 250; b++)
	      for (int a = 0; a < 250; a++)
	      {
	        
	       A[a][b]=0.135;
	       A[a][b-5]=0.53;
	      }

    return 0;
}