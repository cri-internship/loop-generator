#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(640, 980, "zeros");
	float *B = create_one_dim_float(600, "zeros");
	float *C = create_one_dim_float(870, "zeros");

	for (int d = 5; d < 597; d++)
	  for (int c = 5; c < 597; c++)
	    for (int b = 5; b < 597; b++)
	      for (int a = 5; a < 597; a++)
	      {
	        
	       B[a]=B[a-5]-0.822;
	        
	       C[a]=C[a+4]/0.387;
	        
	       B[a]=B[a+3]*A[a][b]+C[a];
	      }

    return 0;
}