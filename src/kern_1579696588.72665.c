#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(80, 730, "zeros");
	float *C = create_one_dim_float(770, "zeros");
	float *B = create_one_dim_float(770, "zeros");
	float **A = create_two_dim_float(410, 880, "zeros");
	float *E = create_one_dim_float(540, "zeros");

	for (int d = 3; d < 540; d++)
	  for (int c = 3; c < 540; c++)
	    for (int b = 3; b < 540; b++)
	      for (int a = 3; a < 540; a++)
	      {
	        
	       E[a]=E[a-3]+0.853/C[a]*A[a][b];
	      }

    return 0;
}