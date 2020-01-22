#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(400, 750, "random");

	for (int d = 2; d < 750; d++)
	  for (int c = 3; c < 400; c++)
	    for (int b = 3; b < 400; b++)
	      for (int a = 3; a < 400; a++)
	      {
	        
	       A[a][b]=A[a-3][b-2]+0.544;
	        
	       float var_a=A[a][b]*0.93;
	       float var_b=A[a][b]*0.966;
	      }

    return 0;
}