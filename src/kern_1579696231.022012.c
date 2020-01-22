#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(230, 330, "zeros");

	for (int d = 0; d < 328; d++)
	  for (int c = 0; c < 227; c++)
	    for (int b = 0; b < 227; b++)
	      for (int a = 0; a < 227; a++)
	      {
	        
	       float var_a=A[a][b]*0.372;
	       float var_b=A[a+3][b+2]*0.851;
	      }

    return 0;
}