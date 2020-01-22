#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(530, "zeros");
	float **C = create_two_dim_float(360, 940, "zeros");
	float *A = create_one_dim_float(130, "zeros");

	for (int d = 0; d < 130; d++)
	  for (int c = 0; c < 130; c++)
	    for (int b = 0; b < 130; b++)
	      for (int a = 0; a < 130; a++)
	      {
	        
	       B[a]=0.775;
	       B[a]=0.446;
	        
	       C[a][b]=A[a]*B[a]/C[a][b];
	       A[a]=A[a]/C[a][b];
	      }

    return 0;
}