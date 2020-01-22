#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(700, 150, "random");

	for (int d = 1; d < 150; d++)
	  for (int c = 0; c < 700; c++)
	    for (int b = 0; b < 700; b++)
	      for (int a = 0; a < 700; a++)
	      {
	        
	       A[a][b]=A[a][b-1]+0.022;
	      }

    return 0;
}