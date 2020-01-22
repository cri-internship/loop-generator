#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(130, 310, "random");
	float *B = create_one_dim_float(350, "random");
	float *C = create_one_dim_float(110, "random");

	for (int d = 0; d < 310; d++)
	  for (int c = 1; c < 130; c++)
	    for (int b = 1; b < 130; b++)
	      for (int a = 1; a < 130; a++)
	      {
	        
	       B[a]=B[a]*A[a][b]+C[a];
	       B[a]=A[a][b]*C[a];
	        
	       A[a][b]=B[a]+0.556;
	       A[a-1][b]=B[a]*0.055;
	      }

    return 0;
}