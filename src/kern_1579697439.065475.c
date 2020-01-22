#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(960, 460, "random");
	float ***B = create_three_dim_float(380, 540, 990, "random");

	for (int d = 3; d < 990; d++)
	  for (int c = 5; c < 460; c++)
	    for (int b = 2; b < 380; b++)
	      for (int a = 2; a < 380; a++)
	      {
	        
	       A[a][b]=A[a-2][b-5]/B[a][b][c];
	        
	       float var_a=B[a][b][c]-0.251;
	       float var_b=B[a-1][b-3][c-3]*0.344;
	      }

    return 0;
}