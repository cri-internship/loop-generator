#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(910, 920, "random");
	float ***C = create_three_dim_float(790, 390, 320, "random");
	float **D = create_two_dim_float(680, 630, "random");
	float **A = create_two_dim_float(110, 710, "random");

	for (int c = 2; c < 320; c++)
	  for (int b = 4; b < 390; b++)
	    for (int a = 4; a < 110; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-1][c-2]+0.85;
	      
	      D[a][b]=D[a+5][b+4]-C[a][b][c]+0.211*A[a][b];
	      
	      A[a][b]=0.019;
	      A[a-4][b-4]=0.074;
	    }

    return 0;
}