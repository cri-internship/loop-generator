#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(340, "random");
	float ***A = create_three_dim_float(790, 960, 320, "random");

	for (int c = 0; c < 315; c++)
	  for (int b = 0; b < 957; b++)
	    for (int a = 5; a < 337; a++)
	    {
	      
	      A[a][b][c]=A[a+3][b+2][c+5]*B[a];
	      
	      A[a][b][c]=A[a+5][b+3][c+5]+0.136;
	      
	      B[a]=A[a][b][c];
	      B[a-5]=A[a][b][c];
	      
	      float var_a=A[a][b][c]*0.647;
	      float var_b=A[a+4][b+1][c+5]/0.053;
	      
	      A[a][b][c]=B[a]-A[a][b][c];
	      B[a]=B[a+3]/A[a][b][c];
	    }

    return 0;
}