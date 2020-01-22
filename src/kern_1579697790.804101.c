#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(450, "random");
	float *A = create_one_dim_float(920, "random");
	float ***C = create_three_dim_float(780, 980, 290, "random");

	for (int c = 4; c < 290; c++)
	  for (int b = 5; b < 980; b++)
	    for (int a = 5; a < 780; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b-1][c-4]/0.198;
	      
	      A[a]=A[a-1]/0.706;
	      
	      A[a]=C[a][b][c]*C[a][b][c];
	      
	      A[a]=A[a+4]+C[a][b][c]/0.571;
	      
	      C[a][b][c]=0.235;
	      
	      float var_a=A[a]/0.603;
	      float var_b=A[a-4]*0.759;
	      
	      C[a][b][c]=A[a]-B[a]+C[a][b][c];
	    }

    return 0;
}