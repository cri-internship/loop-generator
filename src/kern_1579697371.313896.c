#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(560, 570, "ones");
	float ***D = create_three_dim_float(190, 240, 360, "ones");
	float ***B = create_three_dim_float(230, 530, 800, "ones");
	float **C = create_two_dim_float(980, 170, "ones");

	for (int c = 1; c < 797; c++)
	  for (int b = 5; b < 167; b++)
	    for (int a = 5; a < 226; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-5][c-1]+A[a][b]-D[a][b][c]/C[a][b];
	      
	      B[a][b][c]=B[a+4][b+1][c+3]*C[a][b]/A[a][b];
	      
	      C[a][b]=C[a+1][b+3]-0.81;
	      
	      A[a][b]=0.393;
	      A[a][b-2]=0.127;
	      
	      C[a][b]=0.715;
	    }

    return 0;
}