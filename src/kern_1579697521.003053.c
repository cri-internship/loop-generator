#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(150, 750, 510, "zeros");
	double *B = create_one_dim_double(260, "zeros");
	double *C = create_one_dim_double(10, "zeros");

	for (int d = 0; d < 9; d++)
	  for (int c = 0; c < 9; c++)
	    for (int b = 0; b < 9; b++)
	      for (int a = 0; a < 9; a++)
	      {
	        
	       C[a]=C[a+1]*B[a];
	        
	       double var_a=B[a]/0.398;
	      }

    return 0;
}