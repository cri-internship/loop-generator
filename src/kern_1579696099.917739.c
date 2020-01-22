#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(190, "zeros");
	float **B = create_two_dim_float(190, 20, "zeros");

	for (int d = 0; d < 186; d++)
	  for (int c = 0; c < 186; c++)
	    for (int b = 0; b < 186; b++)
	      for (int a = 0; a < 186; a++)
	      {
	        
	       A[a]=A[a+3]*0.064;
	        
	       A[a]=A[a+4]+B[a][b];
	        
	       A[a]=A[a]-B[a][b];
	       B[a][b]=A[a+1]+B[a][b];
	      }

    return 0;
}