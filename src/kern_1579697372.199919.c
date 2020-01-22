#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(720, 390, 220, "ones");
	float *A = create_one_dim_float(540, "ones");
	float ***C = create_three_dim_float(430, 710, 420, "ones");

	for (int c = 0; c < 215; c++)
	  for (int b = 0; b < 385; b++)
	    for (int a = 1; a < 540; a++)
	    {
	      
	      B[a][b][c]=B[a+1][b+1][c+5]-0.713;
	      
	      float var_a=B[a][b][c]/0.085;
	      float var_b=B[a][b+5][c+4]-0.377;
	      
	      C[a][b][c]=A[a]*B[a][b][c];
	      A[a]=A[a-1]+C[a][b][c];
	    }

    return 0;
}