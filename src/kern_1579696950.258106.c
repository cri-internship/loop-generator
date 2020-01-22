#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(860, 950, "random");
	float **B = create_two_dim_float(930, 530, "random");

	for (int d = 2; d < 950; d++)
	  for (int c = 5; c < 860; c++)
	    for (int b = 5; b < 860; b++)
	      for (int a = 5; a < 860; a++)
	      {
	        
	       A[a][b]=A[a-5][b-1]-0.049;
	        
	       A[a][b]=0.924;
	      }

    return 0;
}