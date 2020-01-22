#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(680, "zeros");
	float *B = create_one_dim_float(830, "zeros");

	for (int d = 5; d < 680; d++)
	  for (int c = 5; c < 680; c++)
	    for (int b = 5; b < 680; b++)
	      for (int a = 5; a < 680; a++)
	      {
	        
	       A[a]=A[a-5]-0.571;
	        
	       B[a]=B[a-3]/0.707;
	        
	       B[a]=B[a+2]*0.566;
	        
	       float var_a=A[a]/0.213;
	       float var_b=A[a-3]/0.056;
	        
	       A[a]=A[a]/B[a];
	       B[a]=A[a-1]-B[a];
	      }

    return 0;
}