#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(630, "ones");
	float *B = create_one_dim_float(890, "ones");
	float *D = create_one_dim_float(430, "ones");
	float **C = create_two_dim_float(810, 500, "ones");

	for (int d = 4; d < 425; d++)
	  for (int c = 4; c < 425; c++)
	    for (int b = 4; b < 425; b++)
	      for (int a = 4; a < 425; a++)
	      {
	        
	       D[a]=D[a+5]+0.108;
	        
	       float var_a=A[a]/0.179;
	       A[a]=0.557;
	        
	       D[a]=D[a+1]/A[a]*B[a];
	        
	       float var_b=B[a]/0.679;
	       float var_c=B[a-4]-0.283;
	      }

    return 0;
}