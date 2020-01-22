#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(280, 980, 310, "ones");
	float **A = create_two_dim_float(150, 840, "ones");

	for (int d = 0; d < 305; d++)
	  for (int c = 0; c < 980; c++)
	    for (int b = 0; b < 279; b++)
	      for (int a = 0; a < 279; a++)
	      {
	        
	       float var_a=B[a][b][c]-0.548;
	       float var_b=B[a+1][b][c+5]/0.48;
	      }

    return 0;
}