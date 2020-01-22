#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(10, 540, "ones");
	float *E = create_one_dim_float(750, "ones");
	float *B = create_one_dim_float(490, "ones");
	float **A = create_two_dim_float(790, 440, "ones");
	float ***C = create_three_dim_float(760, 590, 220, "ones");

	for (int c = 0; c < 220; c++)
	  for (int b = 0; b < 590; b++)
	    for (int a = 0; a < 746; a++)
	    {
	      
	      E[a]=0.963;
	      E[a+4]=0.914;
	      
	      E[a]=0.666;
	      
	      float var_a=C[a][b][c]/0.407;
	      float var_b=C[a+4][b][c]/0.665;
	    }

    return 0;
}