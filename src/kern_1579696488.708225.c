#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(630, "zeros");
	float *B = create_one_dim_float(530, "zeros");
	float ***C = create_three_dim_float(800, 390, 380, "zeros");
	float **A = create_two_dim_float(530, 760, "zeros");

	for (int d = 4; d < 380; d++)
	  for (int c = 1; c < 390; c++)
	    for (int b = 5; b < 800; b++)
	      for (int a = 5; a < 800; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-1][c-4]-0.82;
	      }

    return 0;
}