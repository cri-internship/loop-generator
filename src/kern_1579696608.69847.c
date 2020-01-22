#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(860, "ones");
	double *B = create_one_dim_double(610, "ones");

	for (int d = 4; d < 606; d++)
	  for (int c = 4; c < 606; c++)
	    for (int b = 4; b < 606; b++)
	      for (int a = 4; a < 606; a++)
	      {
	        
	       B[a]=B[a-3]+A[a];
	        
	       B[a]=B[a-4]+A[a];
	        
	       A[a]=A[a+1]-0.862;
	        
	       B[a]=B[a+4]+0.086;
	        
	       A[a]=0.822;
	        
	       B[a]=A[a]*B[a];
	       A[a]=A[a-1]-B[a];
	      }

    return 0;
}