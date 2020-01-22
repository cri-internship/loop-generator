#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(970, 660, "zeros");
	float **B = create_two_dim_float(240, 20, "zeros");

	for (int d = 0; d < 658; d++)
	  for (int c = 0; c < 965; c++)
	    for (int b = 0; b < 965; b++)
	      for (int a = 0; a < 965; a++)
	      {
	        
	       A[a][b]=A[a+5][b+2]-0.263;
	        
	       B[a][b]=A[a][b]/B[a][b];
	       A[a][b]=A[a+3][b+1]*B[a][b];
	      }

    return 0;
}