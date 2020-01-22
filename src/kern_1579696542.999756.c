#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(280, "ones");
	double **A = create_two_dim_double(770, 150, "ones");
	double ***B = create_three_dim_double(60, 300, 870, "ones");

	for (int d = 2; d < 280; d++)
	  for (int c = 2; c < 280; c++)
	    for (int b = 2; b < 280; b++)
	      for (int a = 2; a < 280; a++)
	      {
	        
	       C[a]=C[a-2]*0.767;
	      }

    return 0;
}