#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(990, "ones");
	float ***B = create_three_dim_float(750, 990, 10, "ones");

	for (int d = 1; d < 10; d++)
	  for (int c = 5; c < 990; c++)
	    for (int b = 5; b < 750; b++)
	      for (int a = 5; a < 750; a++)
	      {
	        
	       B[a][b][c]=0.182;
	       B[a-5][b-5][c-1]=0.201;
	      }

    return 0;
}