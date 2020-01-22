#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(540, "random");
	double *A = create_one_dim_double(680, "random");

	for (int d = 4; d < 540; d++)
	  for (int c = 4; c < 540; c++)
	    for (int b = 4; b < 540; b++)
	      for (int a = 4; a < 540; a++)
	      {
	        
	       B[a]=B[a-4]+0.201;
	        
	       A[a]=A[a+4]*0.442;
	        
	       B[a]=B[a]*0.355;
	       A[a]=B[a-2]*A[a];
	      }

    return 0;
}