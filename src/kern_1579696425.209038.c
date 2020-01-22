#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(220, 10, "zeros");
	double *A = create_one_dim_double(60, "zeros");
	double ***D = create_three_dim_double(130, 540, 230, "zeros");
	double **C = create_two_dim_double(200, 460, "zeros");

	for (int d = 0; d < 10; d++)
	  for (int c = 3; c < 220; c++)
	    for (int b = 3; b < 220; b++)
	      for (int a = 3; a < 220; a++)
	      {
	        
	       B[a][b]=B[a-3][b]/0.75;
	      }

    return 0;
}