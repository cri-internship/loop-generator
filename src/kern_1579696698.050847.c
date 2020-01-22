#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(220, 390, 860, "random");
	float **B = create_two_dim_float(800, 400, "random");

	for (int c = 5; c < 859; c++)
	  for (int b = 4; b < 390; b++)
	    for (int a = 2; a < 215; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-1][c]-0.891;
	      
	      A[a][b][c]=A[a-2][b-4][c-5]-0.252;
	      
	      B[a][b]=B[a][b+4]-0.145;
	      
	      A[a][b][c]=A[a+5][b][c+1]-0.709;
	      
	      float var_a=B[a][b]/0.086;
	      float var_b=B[a][b+2]-0.214;
	    }

    return 0;
}