#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(990, 670, "random");
	float **D = create_two_dim_float(410, 860, "random");
	float ***C = create_three_dim_float(140, 570, 700, "random");
	float *A = create_one_dim_float(220, "random");
	float **E = create_two_dim_float(780, 560, "random");

	for (int d = 3; d < 700; d++)
	  for (int c = 0; c < 570; c++)
	    for (int b = 0; b < 140; b++)
	      for (int a = 0; a < 140; a++)
	      {
	        
	       C[a][b][c]=A[a];
	       C[a][b][c-3]=0.762;
	      }

    return 0;
}