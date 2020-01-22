#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(940, "random");
	float *A = create_one_dim_float(350, "random");

	for (int d = 4; d < 350; d++)
	  for (int c = 4; c < 350; c++)
	    for (int b = 4; b < 350; b++)
	      for (int a = 4; a < 350; a++)
	      {
	        
	       A[a]=0.112;
	       A[a-1]=B[a];
	        
	       A[a]=0.549;
	        
	       A[a]=A[a]+B[a];
	       B[a]=A[a]+0.362;
	        
	       B[a]=A[a]*B[a];
	       A[a]=A[a-4]+0.733;
	      }

    return 0;
}