#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(240, 130, "ones");
	float *A = create_one_dim_float(940, "ones");

	for (int d = 0; d < 125; d++)
	  for (int c = 4; c < 236; c++)
	    for (int b = 4; b < 236; b++)
	      for (int a = 4; a < 236; a++)
	      {
	        
	       A[a]=A[a-4]*0.098;
	        
	       A[a]=A[a+1]*B[a][b];
	        
	       A[a]=A[a+3]+0.434;
	        
	       A[a]=A[a+2]-0.456;
	        
	       B[a][b]=B[a+4][b+1]/0.558;
	        
	       float var_a=B[a][b]-0.459;
	       float var_b=B[a+3][b+5]/0.405;
	      }

    return 0;
}