#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(790, "zeros");
	float ***A = create_three_dim_float(600, 150, 670, "zeros");

	for (int c = 5; c < 667; c++)
	  for (int b = 4; b < 148; b++)
	    for (int a = 5; a < 597; a++)
	    {
	      
	      B[a]=B[a-1]*0.968;
	      
	      B[a]=B[a-5]/0.947;
	      
	      A[a][b][c]=A[a+3][b+2][c+1]-B[a];
	      
	      A[a][b][c]=A[a+1][b][c+3]/0.865;
	      
	      float var_a=A[a][b][c]*0.752;
	      float var_b=A[a-3][b-4][c-5]-0.593;
	      
	      float var_c=A[a][b][c]+0.468;
	      float var_d=A[a][b-2][c-5]-0.267;
	    }

    return 0;
}