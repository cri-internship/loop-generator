#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(960, "zeros");
	float **E = create_two_dim_float(640, 250, "zeros");
	float *D = create_one_dim_float(260, "zeros");
	float **B = create_two_dim_float(910, 250, "zeros");
	float *C = create_one_dim_float(750, "zeros");

	for (int d = 5; d < 248; d++)
	  for (int c = 5; c < 750; c++)
	    for (int b = 5; b < 750; b++)
	      for (int a = 5; a < 750; a++)
	      {
	        
	       B[a][b]=B[a-5][b-5]-0.87/D[a]+C[a];
	        
	       A[a]=B[a][b]/0.55*D[a]+C[a];
	       A[a]=D[a]+0.392-C[a];
	        
	       float var_a=B[a][b]/0.421;
	       float var_b=B[a+4][b+2]*0.989;
	      }

    return 0;
}