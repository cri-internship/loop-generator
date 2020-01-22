#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(320, "zeros");
	float *C = create_one_dim_float(910, "zeros");
	float **A = create_two_dim_float(140, 640, "zeros");

	for (int d = 0; d < 905; d++)
	  for (int c = 0; c < 905; c++)
	    for (int b = 0; b < 905; b++)
	      for (int a = 0; a < 905; a++)
	      {
	        
	       C[a]=C[a+5]*A[a][b];
	      }

    return 0;
}