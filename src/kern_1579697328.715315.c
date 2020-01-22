#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(960, 270, 420, "random");
	double *A = create_one_dim_double(170, "random");

	for (int d = 0; d < 169; d++)
	  for (int c = 0; c < 169; c++)
	    for (int b = 0; b < 169; b++)
	      for (int a = 0; a < 169; a++)
	      {
	        
	       A[a]=A[a+1]-0.07;
	      }

    return 0;
}