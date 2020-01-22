#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(60, 170, "random");

	for (int d = 0; d < 165; d++)
	  for (int c = 0; c < 57; c++)
	    for (int b = 0; b < 57; b++)
	      for (int a = 0; a < 57; a++)
	      {
	        
	       float var_a=A[a][b]/0.184;
	       float var_b=A[a+3][b+5]*0.202;
	      }

    return 0;
}