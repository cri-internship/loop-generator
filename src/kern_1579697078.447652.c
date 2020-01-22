#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(650, 160, 400, "zeros");
	double ***A = create_three_dim_double(870, 810, 1000, "zeros");
	double ***B = create_three_dim_double(650, 890, 390, "zeros");

	for (int b = 0; b < 810; b++)
	  for (int a = 0; a < 645; a++)
	  {
	    
	     A[a][b][a]=A[a+4][b][a+3]*0.51;
	    
	     double var_a=B[a][b][a]-0.642;
	     double var_b=B[a+5][b+1][a]/0.634;
	  }

    return 0;
}