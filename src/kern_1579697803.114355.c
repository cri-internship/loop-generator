#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(250, "zeros");
	float **A = create_two_dim_float(640, 300, "zeros");
	float *D = create_one_dim_float(780, "zeros");
	float **B = create_two_dim_float(490, 30, "zeros");

	for (int d = 3; d < 776; d++)
	  for (int c = 3; c < 776; c++)
	    for (int b = 3; b < 776; b++)
	      for (int a = 3; a < 776; a++)
	      {
	        
	       D[a]=D[a+4]/A[a][b];
	        
	       D[a]=0.088;
	      }

    return 0;
}