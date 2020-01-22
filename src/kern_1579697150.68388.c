#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(450, "ones");
	double **D = create_two_dim_double(140, 90, "ones");
	double **A = create_two_dim_double(620, 950, "ones");
	double *C = create_one_dim_double(170, "ones");

	for (int d = 1; d < 90; d++)
	  for (int c = 2; c < 140; c++)
	    for (int b = 2; b < 140; b++)
	      for (int a = 2; a < 140; a++)
	      {
	        
	       D[a][b]=D[a-2][b-1]+0.598;
	      }

    return 0;
}