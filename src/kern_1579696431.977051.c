#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(560, "zeros");
	double *B = create_one_dim_double(10, "zeros");

	for (int d = 5; d < 8; d++)
	  for (int c = 5; c < 8; c++)
	    for (int b = 5; b < 8; b++)
	      for (int a = 5; a < 8; a++)
	      {
	        
	       B[a]=B[a-4]-0.679;
	        
	       A[a]=B[a];
	       B[a]=A[a]/B[a];
	        
	       A[a]=A[a-5]*0.037;
	        
	       B[a]=B[a+2]/0.073;
	        
	       A[a]=B[a]/A[a];
	      }

    return 0;
}