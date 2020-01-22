#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(360, "zeros");
	float *A = create_one_dim_float(50, "zeros");

	for (int d = 0; d < 49; d++)
	  for (int c = 0; c < 49; c++)
	    for (int b = 0; b < 49; b++)
	      for (int a = 0; a < 49; a++)
	      {
	        
	       A[a]=0.754;
	       A[a+1]=0.508;
	      }

    return 0;
}