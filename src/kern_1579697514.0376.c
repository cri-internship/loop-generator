#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(110, 30, "zeros");
	double ***B = create_three_dim_double(60, 710, 620, "zeros");
	double **A = create_two_dim_double(550, 120, "zeros");
	double *D = create_one_dim_double(750, "zeros");

	for (int d = 4; d < 620; d++)
	  for (int c = 2; c < 710; c++)
	    for (int b = 3; b < 60; b++)
	      for (int a = 3; a < 60; a++)
	      {
	        
	       double var_a=B[a][b][c]/0.833;
	       double var_b=B[a-3][b-2][c-4]+0.008;
	      }

    return 0;
}