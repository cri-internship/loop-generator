#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(440, "random");
	float *B = create_one_dim_float(240, "random");
	float ***A = create_three_dim_float(490, 900, 800, "random");
	float *C = create_one_dim_float(950, "random");

	for (int d = 2; d < 800; d++)
	  for (int c = 4; c < 900; c++)
	    for (int b = 0; b < 490; b++)
	      for (int a = 0; a < 490; a++)
	      {
	        
	       A[a][b][c]=A[a][b-4][c-2]-D[a];
	      }

    return 0;
}