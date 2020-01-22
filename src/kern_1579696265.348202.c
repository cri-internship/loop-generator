#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(570, 490, "random");
	float *B = create_one_dim_float(530, "random");

	for (int d = 4; d < 488; d++)
	  for (int c = 3; c < 529; c++)
	    for (int b = 3; b < 529; b++)
	      for (int a = 3; a < 529; a++)
	      {
	        
	       A[a][b]=A[a-2][b-2]+B[a];
	        
	       A[a][b]=A[a-1][b-4]+0.107;
	        
	       B[a]=B[a-3]/0.433;
	        
	       A[a][b]=A[a-2][b-3]/0.113;
	        
	       B[a]=B[a+1]+A[a][b];
	        
	       A[a][b]=A[a][b+2]*0.041;
	      }

    return 0;
}