#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(110, 860, "random");
	float *A = create_one_dim_float(130, "random");
	float ***C = create_three_dim_float(410, 450, 460, "random");

	for (int d = 1; d < 860; d++)
	  for (int c = 4; c < 110; c++)
	    for (int b = 4; b < 110; b++)
	      for (int a = 4; a < 110; a++)
	      {
	        
	       B[a][b]=B[a-4][b-1]-C[a][b][c];
	      }

    return 0;
}