#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(350, 930, "ones");
	float **A = create_two_dim_float(920, 280, "ones");

	for (int d = 5; d < 277; d++)
	  for (int c = 4; c < 345; c++)
	    for (int b = 4; b < 345; b++)
	      for (int a = 4; a < 345; a++)
	      {
	        
	       A[a][b]=A[a-4][b-3]/0.632;
	        
	       B[a][b]=B[a-1][b-5]-A[a][b];
	        
	       A[a][b]=0.812;
	        
	       B[a][b]=0.251;
	        
	       A[a][b]=B[a][b]/A[a][b];
	       B[a][b]=B[a+5][b+4]/A[a][b];
	        
	       float var_a=B[a][b]/0.211;
	      }

    return 0;
}