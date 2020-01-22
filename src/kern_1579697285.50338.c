#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(470, 860, 930, "ones");
	float ***C = create_three_dim_float(540, 980, 270, "ones");
	float *B = create_one_dim_float(550, "ones");

	for (int c = 4; c < 270; c++)
	  for (int b = 3; b < 860; b++)
	    for (int a = 4; a < 470; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-1][c-4]+B[a]-C[a][b][c];
	      
	      C[a][b][c]=C[a-3][b-3][c-4]+0.256;
	      
	      B[a]=B[a+1]/0.443-C[a][b][c];
	      
	      C[a][b][c]=B[a];
	      
	      A[a][b][c]=B[a]/C[a][b][c]*A[a][b][c];
	      B[a]=B[a-4]-0.231;
	    }

    return 0;
}