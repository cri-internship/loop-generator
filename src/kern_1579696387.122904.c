#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(480, 20, "random");
	float **A = create_two_dim_float(20, 970, "random");
	float ***B = create_three_dim_float(840, 460, 270, "random");
	float ***C = create_three_dim_float(990, 500, 600, "random");

	for (int c = 2; c < 270; c++)
	  for (int b = 3; b < 19; b++)
	    for (int a = 5; a < 20; a++)
	    {
	      
	      D[a][b]=D[a-5][b-1]+0.291;
	      
	      A[a][b]=A[a-5][b-3]*0.938-C[a][b][c]/B[a][b][c];
	      
	      A[a][b]=0.954;
	      
	      float var_a=D[a][b]/0.87;
	      float var_b=D[a+2][b+1]/0.476;
	      
	      A[a][b]=B[a][b][c]/A[a][b]+0.236*C[a][b][c];
	      B[a][b][c]=B[a-3][b-1][c-2]*C[a][b][c]/0.38;
	    }

    return 0;
}