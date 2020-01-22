#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(120, "random");
	float **A = create_two_dim_float(180, 440, "random");

	for (int d = 0; d < 437; d++)
	  for (int c = 1; c < 119; c++)
	    for (int b = 1; b < 119; b++)
	      for (int a = 1; a < 119; a++)
	      {
	        
	       A[a][b]=A[a-1][b]/0.078;
	        
	       A[a][b]=A[a+5][b+3]/B[a];
	        
	       A[a][b]=B[a]*A[a][b];
	       B[a]=A[a][b];
	        
	       B[a]=B[a+1]*A[a][b];
	      }

    return 0;
}