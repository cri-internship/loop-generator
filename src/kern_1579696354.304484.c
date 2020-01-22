#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(600, 140, "random");
	float *C = create_one_dim_float(800, "random");
	float **D = create_two_dim_float(270, 40, "random");
	float ***B = create_three_dim_float(950, 300, 400, "random");

	for (int d = 0; d < 400; d++)
	  for (int c = 0; c < 300; c++)
	    for (int b = 4; b < 950; b++)
	      for (int a = 4; a < 950; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b][c]/D[a][b];
	      }

    return 0;
}