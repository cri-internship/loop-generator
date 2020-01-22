#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(900, "zeros");
	double ***D = create_three_dim_double(150, 690, 360, "zeros");
	double ***A = create_three_dim_double(90, 670, 70, "zeros");
	double *B = create_one_dim_double(710, "zeros");
	double *E = create_one_dim_double(600, "zeros");

	for (int d = 3; d < 710; d++)
	  for (int c = 3; c < 710; c++)
	    for (int b = 3; b < 710; b++)
	      for (int a = 3; a < 710; a++)
	      {
	        
	       B[a]=B[a-3]*0.137;
	      }

    return 0;
}