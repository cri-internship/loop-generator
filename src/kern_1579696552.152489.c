#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(450, "random");
	float **A = create_two_dim_float(940, 990, "random");
	float *E = create_one_dim_float(640, "random");
	float ***B = create_three_dim_float(480, 100, 980, "random");
	float *D = create_one_dim_float(150, "random");

	for (int c = 0; c < 978; c++)
	  for (int b = 2; b < 99; b++)
	    for (int a = 1; a < 477; a++)
	    {
	      
	      A[a][b]=A[a-1][b-2]+0.065;
	      
	      float var_a=B[a][b][c]-0.575;
	      float var_b=B[a+3][b+1][c+2]+0.598;
	    }

    return 0;
}