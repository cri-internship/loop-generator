#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(360, 410, 810, "ones");
	float *C = create_one_dim_float(700, "ones");
	float ***D = create_three_dim_float(400, 900, 900, "ones");
	float **B = create_two_dim_float(380, 220, "ones");

	for (int c = 0; c < 810; c++)
	  for (int b = 4; b < 220; b++)
	    for (int a = 4; a < 360; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-4][c]/C[a];
	      
	      D[a][b][c]=C[a]-0.669+D[a][b][c]*B[a][b];
	      B[a][b]=C[a+4]+0.954-A[a][b][c]/D[a][b][c];
	      
	      float var_a=B[a][b]/0.323;
	      float var_b=B[a-4][b-3]+0.798;
	    }

    return 0;
}