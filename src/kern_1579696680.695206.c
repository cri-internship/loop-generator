#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(250, 780, 110, "ones");
	double **B = create_two_dim_double(360, 290, "ones");

	for (int d = 0; d < 285; d++)
	  for (int c = 0; c < 356; c++)
	    for (int b = 0; b < 356; b++)
	      for (int a = 0; a < 356; a++)
	      {
	        
	       double var_a=B[a][b]*0.789;
	       double var_b=B[a+4][b+5]*0.804;
	      }

    return 0;
}