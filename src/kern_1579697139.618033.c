#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(710, 180, 310, "random");
	double *A = create_one_dim_double(950, "random");
	double **C = create_two_dim_double(980, 380, "random");

	for (int d = 0; d < 378; d++)
	  for (int c = 0; c < 978; c++)
	    for (int b = 0; b < 978; b++)
	      for (int a = 0; a < 978; a++)
	      {
	        
	       C[a][b]=C[a+2][b+2]/0.607;
	      }

    return 0;
}