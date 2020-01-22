#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(490, 510, "ones");
	double **A = create_two_dim_double(840, 480, "ones");

	for (int d = 4; d < 510; d++)
	  for (int c = 4; c < 490; c++)
	    for (int b = 4; b < 490; b++)
	      for (int a = 4; a < 490; a++)
	      {
	        
	       B[a][b]=B[a-4][b-4]-0.773;
	      }

    return 0;
}