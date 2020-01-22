#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(440, "random");
	double ***D = create_three_dim_double(890, 750, 270, "random");
	double **B = create_two_dim_double(880, 450, "random");
	double *A = create_one_dim_double(490, "random");

	for (int d = 0; d < 436; d++)
	  for (int c = 0; c < 436; c++)
	    for (int b = 0; b < 436; b++)
	      for (int a = 0; a < 436; a++)
	      {
	        
	       C[a]=A[a];
	       C[a+4]=B[a][b];
	      }

    return 0;
}