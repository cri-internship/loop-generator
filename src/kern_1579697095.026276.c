#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(880, 430, "zeros");
	float *B = create_one_dim_float(70, "zeros");

	for (int d = 0; d < 426; d++)
	  for (int c = 0; c < 876; c++)
	    for (int b = 0; b < 876; b++)
	      for (int a = 0; a < 876; a++)
	      {
	        
	       A[a][b]=B[a];
	       A[a+4][b+4]=B[a];
	      }

    return 0;
}