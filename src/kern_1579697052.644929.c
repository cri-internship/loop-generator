#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(120, 110, 520, "zeros");
	float ***B = create_three_dim_float(460, 430, 700, "zeros");
	float *A = create_one_dim_float(440, "zeros");

	for (int d = 0; d < 439; d++)
	  for (int c = 0; c < 439; c++)
	    for (int b = 0; b < 439; b++)
	      for (int a = 0; a < 439; a++)
	      {
	        
	       A[a]=0.273;
	       A[a+1]=0.373;
	      }

    return 0;
}