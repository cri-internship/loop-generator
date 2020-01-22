#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(900, "random");
	float **A = create_two_dim_float(340, 380, "random");

	for (int d = 1; d < 376; d++)
	  for (int c = 5; c < 340; c++)
	    for (int b = 5; b < 340; b++)
	      for (int a = 5; a < 340; a++)
	      {
	        
	       A[a][b]=A[a-5][b-1]+0.38;
	        
	       B[a]=B[a+5]-0.468;
	        
	       A[a][b]=B[a];
	        
	       B[a]=A[a][b];
	      }

    return 0;
}