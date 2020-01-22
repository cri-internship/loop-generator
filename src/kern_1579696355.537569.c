#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(170, "ones");
	float **A = create_two_dim_float(670, 230, "ones");
	float **B = create_two_dim_float(130, 750, "ones");

	for (int d = 4; d < 749; d++)
	  for (int c = 2; c < 127; c++)
	    for (int b = 2; b < 127; b++)
	      for (int a = 2; a < 127; a++)
	      {
	        
	       B[a][b]=B[a-2][b-3]+C[a];
	        
	       B[a][b]=B[a+3][b+1]+0.214;
	      }

    return 0;
}