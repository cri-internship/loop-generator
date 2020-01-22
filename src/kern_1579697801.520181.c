#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(640, 590, 60, "zeros");
	float ***D = create_three_dim_float(590, 550, 920, "zeros");
	float **A = create_two_dim_float(740, 800, "zeros");
	float *B = create_one_dim_float(700, "zeros");

	for (int c = 2; c < 60; c++)
	  for (int b = 1; b < 590; b++)
	    for (int a = 4; a < 640; a++)
	    {
	      
	      A[a][b]=A[a+5][b+2]-B[a];
	      
	      float var_a=C[a][b][c]*0.874;
	      float var_b=C[a-4][b-1][c-2]/0.803;
	    }

    return 0;
}