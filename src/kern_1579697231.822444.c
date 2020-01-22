#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(300, 490, "random");
	double **D = create_two_dim_double(950, 760, "random");
	double *C = create_one_dim_double(610, "random");
	double ***B = create_three_dim_double(620, 600, 630, "random");

	for (int d = 1; d < 490; d++)
	  for (int c = 4; c < 300; c++)
	    for (int b = 4; b < 300; b++)
	      for (int a = 4; a < 300; a++)
	      {
	        
	       A[a][b]=A[a-4][b-1]/0.121;
	      }

    return 0;
}