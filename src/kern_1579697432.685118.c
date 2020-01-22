#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(780, 670, "random");
	float *A = create_one_dim_float(900, "random");

	for (int d = 4; d < 666; d++)
	  for (int c = 5; c < 780; c++)
	    for (int b = 5; b < 780; b++)
	      for (int a = 5; a < 780; a++)
	      {
	        
	       A[a]=A[a-1]*B[a][b];
	        
	       B[a][b]=B[a][b-4]+0.691;
	        
	       A[a]=A[a-4]+0.456;
	        
	       A[a]=A[a+4]-0.874;
	        
	       B[a][b]=B[a][b+4]/0.753;
	        
	       B[a][b]=B[a][b]+A[a];
	       A[a]=B[a-5][b-4]/A[a];
	      }

    return 0;
}