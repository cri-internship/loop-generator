#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(150, 790, "ones");

	for (int d = 0; d < 787; d++)
	  for (int c = 0; c < 148; c++)
	    for (int b = 0; b < 148; b++)
	      for (int a = 0; a < 148; a++)
	      {
	        
	       A[a][b]=A[a+2][b+3]/0.158;
	      }

    return 0;
}