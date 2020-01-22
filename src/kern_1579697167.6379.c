#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(500, 10, "zeros");
	float *E = create_one_dim_float(780, "zeros");
	float *B = create_one_dim_float(110, "zeros");
	float *D = create_one_dim_float(630, "zeros");
	float *C = create_one_dim_float(170, "zeros");

	for (int d = 5; d < 110; d++)
	  for (int c = 5; c < 110; c++)
	    for (int b = 5; b < 110; b++)
	      for (int a = 5; a < 110; a++)
	      {
	        
	       B[a]=B[a-5]*0.155;
	      }

    return 0;
}