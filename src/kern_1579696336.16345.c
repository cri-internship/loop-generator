#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(920, 1000, 120, "random");
	double *A = create_one_dim_double(570, "random");

	for (int d = 0; d < 567; d++)
	  for (int c = 0; c < 567; c++)
	    for (int b = 0; b < 567; b++)
	      for (int a = 0; a < 567; a++)
	      {
	        
	       A[a]=A[a+2]*0.629;
	        
	       A[a]=A[a+3]*0.775;
	      }

    return 0;
}