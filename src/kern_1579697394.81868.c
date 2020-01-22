#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(390, 330, "zeros");
	float **B = create_two_dim_float(380, 420, "zeros");

	for (int d = 3; d < 415; d++)
	  for (int c = 1; c < 379; c++)
	    for (int b = 1; b < 379; b++)
	      for (int a = 1; a < 379; a++)
	      {
	        
	       B[a][b]=B[a][b-3]+0.482;
	        
	       B[a][b]=B[a+1][b+5]-0.974;
	        
	       float var_a=B[a][b]-0.577;
	       float var_b=B[a-1][b-2]-0.634;
	      }

    return 0;
}