#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(20, "ones");
	float *A = create_one_dim_float(660, "ones");
	float **D = create_two_dim_float(580, 810, "ones");
	float ***C = create_three_dim_float(220, 750, 230, "ones");

	for (int c = 0; c < 230; c++)
	  for (int b = 3; b < 750; b++)
	    for (int a = 5; a < 220; a++)
	    {
	      
	      D[a][b]=D[a-5][b-3]/0.343;
	      
	      float var_a=C[a][b][c]-0.827;
	      float var_b=C[a-2][b-1][c]+0.823;
	    }

    return 0;
}