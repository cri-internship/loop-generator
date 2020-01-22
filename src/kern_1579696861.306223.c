#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(200, 810, "random");
	float *B = create_one_dim_float(120, "random");

	for (int d = 2; d < 120; d++)
	  for (int c = 2; c < 120; c++)
	    for (int b = 2; b < 120; b++)
	      for (int a = 2; a < 120; a++)
	      {
	        
	       B[a]=B[a-2]/A[a][b];
	      }

    return 0;
}