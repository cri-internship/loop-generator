#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(560, "random");
	float **A = create_two_dim_float(570, 330, "random");
	float **B = create_two_dim_float(240, 900, "random");

	for (int d = 1; d < 330; d++)
	  for (int c = 1; c < 235; c++)
	    for (int b = 1; b < 235; b++)
	      for (int a = 1; a < 235; a++)
	      {
	        
	       A[a][b]=A[a-1][b-1]/0.809;
	        
	       B[a][b]=B[a+5][b+5]*0.118;
	        
	       B[a][b]=B[a+2][b+3]*0.372;
	      }

    return 0;
}