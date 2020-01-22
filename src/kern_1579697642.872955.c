#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(920, 840, "random");
	float ***C = create_three_dim_float(350, 640, 480, "random");
	float ***A = create_three_dim_float(270, 800, 110, "random");
	float ***D = create_three_dim_float(150, 440, 270, "random");
	float *E = create_one_dim_float(920, "random");

	for (int d = 5; d < 110; d++)
	  for (int c = 4; c < 800; c++)
	    for (int b = 5; b < 270; b++)
	      for (int a = 5; a < 270; a++)
	      {
	        
	       E[a]=E[a+3]/0.392;
	        
	       float var_a=A[a][b][c]/0.304;
	       float var_b=A[a-5][b-4][c-5]/0.554;
	      }

    return 0;
}