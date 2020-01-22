#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(920, 60, "zeros");
	double **B = create_two_dim_double(430, 510, "zeros");
	double **A = create_two_dim_double(890, 470, "zeros");

	for (int d = 1; d < 56; d++)
	  for (int c = 5; c < 919; c++)
	    for (int b = 5; b < 919; b++)
	      for (int a = 5; a < 919; a++)
	      {
	        
	       C[a][b]=C[a+1][b+4]+0.793;
	        
	       double var_a=C[a][b]*0.291;
	       double var_b=C[a-5][b-1]/0.162;
	      }

    return 0;
}