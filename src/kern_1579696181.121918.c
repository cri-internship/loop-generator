#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(180, 750, 170, "zeros");
	float **A = create_two_dim_float(100, 910, "zeros");

	for (int d = 1; d < 170; d++)
	  for (int c = 4; c < 750; c++)
	    for (int b = 2; b < 180; b++)
	      for (int a = 2; a < 180; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-4][c-1]-0.948;
	      }

    return 0;
}