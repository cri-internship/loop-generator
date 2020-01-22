#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(410, "zeros");
	float **A = create_two_dim_float(650, 640, "zeros");

	for (int d = 0; d < 640; d++)
	  for (int c = 3; c < 650; c++)
	    for (int b = 3; b < 650; b++)
	      for (int a = 3; a < 650; a++)
	      {
	        
	       A[a][b]=A[a-3][b]+0.169;
	      }

    return 0;
}