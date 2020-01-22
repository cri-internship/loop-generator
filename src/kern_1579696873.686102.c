#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(600, 670, "zeros");

	for (int d = 4; d < 667; d++)
	  for (int c = 4; c < 597; c++)
	    for (int b = 4; b < 597; b++)
	      for (int a = 4; a < 597; a++)
	      {
	        
	       A[a][b]=0.659;
	       A[a-4][b-4]=0.516;
	        
	       float var_a=A[a][b]*0.598;
	       float var_b=A[a+3][b+3]-0.355;
	      }

    return 0;
}