#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(360, "random");
	float *A = create_one_dim_float(360, "random");

	for (int d = 2; d < 356; d++)
	  for (int c = 2; c < 356; c++)
	    for (int b = 2; b < 356; b++)
	      for (int a = 2; a < 356; a++)
	      {
	        
	       B[a]=B[a-2]+A[a];
	        
	       A[a]=A[a+4]/0.199;
	        
	       A[a]=0.696;
	        
	       B[a]=B[a]*A[a];
	      }

    return 0;
}