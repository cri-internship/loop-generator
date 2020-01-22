#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(560, 270, 810, "zeros");
	float *B = create_one_dim_float(600, "zeros");
	float **A = create_two_dim_float(810, 930, "zeros");

	for (int c = 2; c < 810; c++)
	  for (int b = 1; b < 270; b++)
	    for (int a = 1; a < 560; a++)
	    {
	      
	      A[a][b]=A[a][b-1]/0.745;
	      
	      C[a][b][c]=C[a-1][b][c-2]+B[a];
	    }

    return 0;
}