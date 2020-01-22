#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(780, 130, "zeros");
	float *B = create_one_dim_float(180, "zeros");

	for (int d = 0; d < 125; d++)
	  for (int c = 0; c < 175; c++)
	    for (int b = 0; b < 175; b++)
	      for (int a = 0; a < 175; a++)
	      {
	        
	       A[a][b]=B[a];
	       A[a+1][b+5]=0.054;
	        
	       A[a][b]=B[a]+A[a][b];
	       B[a]=B[a+5]+A[a][b];
	      }

    return 0;
}