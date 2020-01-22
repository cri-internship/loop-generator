#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(100, 1000, "ones");

	for (int d = 0; d < 1000; d++)
	  for (int c = 0; c < 95; c++)
	    for (int b = 0; b < 95; b++)
	      for (int a = 0; a < 95; a++)
	      {
	        
	       A[a][b]=0.981;
	       float  var_a=A[a][b]-0.002;
	        
	       A[a][b]=A[a+5][b]*0.068;
	      }

    return 0;
}