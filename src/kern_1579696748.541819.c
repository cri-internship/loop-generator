#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(340, 330, "zeros");
	float **A = create_two_dim_float(110, 950, "zeros");
	float *C = create_one_dim_float(250, "zeros");
	float *D = create_one_dim_float(510, "zeros");

	for (int d = 0; d < 950; d++)
	  for (int c = 0; c < 107; c++)
	    for (int b = 0; b < 107; b++)
	      for (int a = 0; a < 107; a++)
	      {
	        
	       A[a][b]=A[a+3][b]/0.429;
	        
	       D[a]=0.118;
	       D[a]=0.355;
	        
	       B[a][b]=C[a]/A[a][b];
	       D[a]=C[a+1]+0.525*D[a]/A[a][b];
	        
	       float var_a=D[a]+0.069;
	       float var_b=D[a+2]-0.999;
	      }

    return 0;
}