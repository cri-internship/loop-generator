#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(1000, 810, "zeros");
	float ***E = create_three_dim_float(300, 360, 380, "zeros");
	float **A = create_two_dim_float(250, 20, "zeros");
	float *D = create_one_dim_float(680, "zeros");
	float *B = create_one_dim_float(490, "zeros");

	for (int c = 0; c < 486; c++)
	  for (int b = 0; b < 486; b++)
	    for (int a = 0; a < 486; a++)
	    {
	      
	      B[a]=B[a+4]*C[a][b]-0.315+D[a];
	    }

    return 0;
}