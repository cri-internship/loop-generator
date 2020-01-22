#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(610, 470, 620, "zeros");
	float **B = create_two_dim_float(140, 990, "zeros");
	float *A = create_one_dim_float(760, "zeros");

	for (int c = 4; c < 617; c++)
	  for (int b = 5; b < 467; b++)
	    for (int a = 5; a < 606; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b-5][c-4]/0.696;
	      
	      C[a][b][c]=C[a+3][b+3][c+1]+0.467;
	      
	      C[a][b][c]=A[a]+C[a][b][c]/0.571;
	      A[a]=C[a][b][c];
	      
	      A[a]=0.8;
	      
	      float var_a=C[a][b][c]*0.856;
	      float var_b=C[a+4][b+2][c+3]-0.327;
	    }

    return 0;
}