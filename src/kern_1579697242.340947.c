#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(340, 110, "ones");
	float *B = create_one_dim_float(130, "ones");
	float *D = create_one_dim_float(730, "ones");
	float ***A = create_three_dim_float(60, 50, 670, "ones");

	for (int d = 0; d < 730; d++)
	  for (int c = 0; c < 730; c++)
	    for (int b = 0; b < 730; b++)
	      for (int a = 0; a < 730; a++)
	      {
	        
	       D[a]=A[a][b][c];
	       D[a]=B[a]/0.36;
	      }

    return 0;
}