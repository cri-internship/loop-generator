#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(590, "zeros");
	float ***C = create_three_dim_float(960, 830, 700, "zeros");
	float *A = create_one_dim_float(60, "zeros");

	for (int d = 5; d < 60; d++)
	  for (int c = 5; c < 60; c++)
	    for (int b = 5; b < 60; b++)
	      for (int a = 5; a < 60; a++)
	      {
	        
	       A[a]=A[a-5]-0.396;
	        
	       B[a]=B[a+1]+0.127;
	        
	       B[a]=0.052;
	      }

    return 0;
}