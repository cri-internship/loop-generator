#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(40, "ones");
	float **B = create_two_dim_float(540, 750, "ones");

	for (int d = 3; d < 749; d++)
	  for (int c = 4; c < 40; c++)
	    for (int b = 4; b < 40; b++)
	      for (int a = 4; a < 40; a++)
	      {
	        
	       A[a]=B[a][b];
	       B[a][b]=A[a]+B[a][b];
	        
	       B[a][b]=B[a+5][b+1]-0.197;
	        
	       A[a]=B[a][b];
	        
	       A[a]=A[a]*B[a][b];
	       B[a][b]=A[a-1]/0.661;
	      }

    return 0;
}