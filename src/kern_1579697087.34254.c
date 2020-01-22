#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(250, 70, "random");

	for (int d = 0; d < 70; d++)
	  for (int c = 0; c < 246; c++)
	    for (int b = 0; b < 246; b++)
	      for (int a = 0; a < 246; a++)
	      {
	        
	       A[a][b]=A[a+4][b]+0.403;
	      }

    return 0;
}