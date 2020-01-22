#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(940, "ones");
	float **C = create_two_dim_float(1000, 140, "ones");
	float **B = create_two_dim_float(210, 180, "ones");
	float **A = create_two_dim_float(60, 20, "ones");

	for (int d = 0; d < 17; d++)
	  for (int c = 0; c < 60; c++)
	    for (int b = 0; b < 60; b++)
	      for (int a = 0; a < 60; a++)
	      {
	        
	       A[a][b]=0.539;
	       A[a][b+3]=0.325;
	      }

    return 0;
}