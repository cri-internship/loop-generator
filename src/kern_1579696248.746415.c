#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(920, "zeros");
	float **A = create_two_dim_float(250, 770, "zeros");

	for (int d = 1; d < 770; d++)
	  for (int c = 4; c < 250; c++)
	    for (int b = 4; b < 250; b++)
	      for (int a = 4; a < 250; a++)
	      {
	        
	       A[a][b]=A[a-4][b-1]+B[a];
	      }

    return 0;
}