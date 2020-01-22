#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(680, "ones");
	float *B = create_one_dim_float(930, "ones");

	for (int d = 4; d < 675; d++)
	  for (int c = 4; c < 675; c++)
	    for (int b = 4; b < 675; b++)
	      for (int a = 4; a < 675; a++)
	      {
	        
	       A[a]=A[a-4]-B[a];
	        
	       B[a]=B[a-2]-A[a];
	        
	       A[a]=A[a+2]*B[a];
	        
	       A[a]=A[a]+B[a];
	       B[a]=A[a+5]-B[a];
	      }

    return 0;
}