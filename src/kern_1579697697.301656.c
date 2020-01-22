#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(220, 200, 720, "random");
	float ***A = create_three_dim_float(200, 100, 500, "random");
	float *B = create_one_dim_float(380, "random");

	for (int c = 4; c < 500; c++)
	  for (int b = 2; b < 100; b++)
	    for (int a = 5; a < 200; a++)
	    {
	      
	      C[a][b][c]=C[a][b-2][c-4]/0.936;
	      
	      A[a][b][c]=A[a-1][b][c-3]/0.574;
	      
	      C[a][b][c]=C[a-4][b][c-4]+B[a];
	      
	      float var_a=B[a]/0.586;
	      float var_b=B[a-5]-0.318;
	      
	      B[a]=A[a][b][c]+C[a][b][c]*C[a][b][c];
	      A[a][b][c]=A[a-4][b-1][c-1]-0.304;
	    }

    return 0;
}