#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(340, "random");
	float ***A = create_three_dim_float(360, 260, 190, "random");
	float **C = create_two_dim_float(500, 540, "random");
	float ***D = create_three_dim_float(60, 880, 930, "random");

	for (int c = 3; c < 930; c++)
	  for (int b = 4; b < 540; b++)
	    for (int a = 5; a < 60; a++)
	    {
	      
	      C[a][b]=C[a-2][b-2]-D[a][b][c]/0.033+A[a][b][c];
	      
	      D[a][b][c]=D[a-5][b-4][c-3]-0.408;
	      
	      C[a][b]=0.826;
	      
	      B[a]=C[a][b];
	      B[a+4]=D[a][b][c]+A[a][b][c]*C[a][b];
	    }

    return 0;
}