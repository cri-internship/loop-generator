#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(60, 180, 760, "random");
	double *B = create_one_dim_double(40, "random");
	double **A = create_two_dim_double(310, 710, "random");
	double *D = create_one_dim_double(80, "random");

	for (int d = 5; d < 80; d++)
	  for (int c = 5; c < 80; c++)
	    for (int b = 5; b < 80; b++)
	      for (int a = 5; a < 80; a++)
	      {
	        
	       D[a]=D[a-5]-B[a]+C[a][b][c];
	      }

    return 0;
}