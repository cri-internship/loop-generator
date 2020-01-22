#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(760, 280, 260, "random");
	double *B = create_one_dim_double(10, "random");
	double **D = create_two_dim_double(700, 510, "random");
	double *A = create_one_dim_double(670, "random");

	for (int d = 1; d < 5; d++)
	  for (int c = 1; c < 5; c++)
	    for (int b = 1; b < 5; b++)
	      for (int a = 1; a < 5; a++)
	      {
	        
	       B[a]=B[a+5]+0.451;
	        
	       B[a]=0.355;
	      }

    return 0;
}