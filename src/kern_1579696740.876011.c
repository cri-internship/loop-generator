#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(520, 170, "zeros");

	for (int d = 3; d < 170; d++)
	  for (int c = 3; c < 520; c++)
	    for (int b = 3; b < 520; b++)
	      for (int a = 3; a < 520; a++)
	      {
	        
	       A[a][b]=A[a-3][b-3]/0.459;
	      }

    return 0;
}