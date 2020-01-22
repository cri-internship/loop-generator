#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(370, 930, "ones");
	float *B = create_one_dim_float(460, "ones");

	for (int d = 0; d < 928; d++)
	  for (int c = 0; c < 366; c++)
	    for (int b = 0; b < 366; b++)
	      for (int a = 0; a < 366; a++)
	      {
	        
	       A[a][b]=0.869;
	       A[a+4][b+2]=0.561;
	      }

    return 0;
}