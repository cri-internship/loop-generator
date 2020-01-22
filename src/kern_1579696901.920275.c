#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(310, 940, 10, "ones");
	float **C = create_two_dim_float(770, 810, "ones");
	float *A = create_one_dim_float(710, "ones");

	for (int b = 5; b < 938; b++)
	  for (int a = 5; a < 305; a++)
	  {
	    
	     B[a][b][a]=B[a][b-4][a-2]+0.192;
	    
	     B[a][b][a]=B[a+3][b+2][a+1]+0.642;
	    
	     float var_a=B[a][b][a]-0.582;
	     float var_b=B[a+5][b+1][a+3]+0.034;
	  }

    return 0;
}