#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(570, 940, 300, "zeros");
	double **B = create_two_dim_double(530, 660, "zeros");
	double *C = create_one_dim_double(500, "zeros");

	for (int d = 0; d < 498; d++)
	  for (int c = 0; c < 498; c++)
	    for (int b = 0; b < 498; b++)
	      for (int a = 0; a < 498; a++)
	      {
	        
	       double var_a=C[a]/0.894;
	       double var_b=C[a+2]/0.33;
	      }

    return 0;
}