#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(660, 750, 440, "random");
	float *B = create_one_dim_float(660, "random");
	float *A = create_one_dim_float(450, "random");

	for (int d = 5; d < 440; d++)
	  for (int c = 1; c < 750; c++)
	    for (int b = 5; b < 450; b++)
	      for (int a = 5; a < 450; a++)
	      {
	        
	       B[a]=0.278;
	       float  var_a=B[a]*0.598;
	        
	       C[a][b][c]=B[a]+0.811;
	       C[a-5][b-1][c-5]=A[a];
	        
	       float var_b=A[a]/0.904;
	       float var_c=A[a-2]-0.809;
	      }

    return 0;
}