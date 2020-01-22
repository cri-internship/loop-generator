#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(20, 350, 640, "ones");
	double **D = create_two_dim_double(660, 770, "ones");
	double **A = create_two_dim_double(870, 690, "ones");
	double *C = create_one_dim_double(960, "ones");

	for (int d = 0; d < 955; d++)
	  for (int c = 0; c < 955; c++)
	    for (int b = 0; b < 955; b++)
	      for (int a = 0; a < 955; a++)
	      {
	        
	       C[a]=C[a+5]/0.119;
	      }

    return 0;
}