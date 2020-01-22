#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(710, 820, "random");
	float *B = create_one_dim_float(530, "random");

	for (int d = 0; d < 820; d++)
	  for (int c = 0; c < 710; c++)
	    for (int b = 0; b < 710; b++)
	      for (int a = 0; a < 710; a++)
	      {
	        
	       A[a][b]=B[a];
	       B[a]=A[a][b]/B[a];
	      }

    return 0;
}