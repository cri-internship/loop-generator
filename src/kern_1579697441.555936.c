#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(970, 860, 900, "random");
	double **C = create_two_dim_double(670, 300, "random");
	double *D = create_one_dim_double(480, "random");
	double ***A = create_three_dim_double(130, 100, 400, "random");
	double **E = create_two_dim_double(980, 40, "random");

	for (int d = 5; d < 480; d++)
	  for (int c = 5; c < 480; c++)
	    for (int b = 5; b < 480; b++)
	      for (int a = 5; a < 480; a++)
	      {
	        
	       D[a]=D[a-5]/0.64;
	      }

    return 0;
}