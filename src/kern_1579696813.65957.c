#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(900, "random");
	float *A = create_one_dim_float(160, "random");

	for (int d = 0; d < 897; d++)
	  for (int c = 0; c < 897; c++)
	    for (int b = 0; b < 897; b++)
	      for (int a = 0; a < 897; a++)
	      {
	        
	       B[a]=B[a+3]-0.887;
	      }

    return 0;
}