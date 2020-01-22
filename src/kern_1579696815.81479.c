#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(200, 690, "random");
	float *B = create_one_dim_float(160, "random");
	float ***C = create_three_dim_float(480, 10, 990, "random");

	for (int c = 0; c < 985; c++)
	  for (int b = 1; b < 7; b++)
	    for (int a = 5; a < 158; a++)
	    {
	      
	      A[a][b]=A[a][b-1]+0.133;
	      
	      B[a]=B[a-5]*0.393;
	      
	      C[a][b][c]=C[a+5][b+3][c+5]+B[a]/B[a];
	      
	      C[a][b][c]=C[a+1][b+2][c+3]-A[a][b];
	      
	      A[a][b]=A[a+5][b+3]/0.973;
	      
	      B[a]=B[a+2]+C[a][b][c]-A[a][b];
	    }

    return 0;
}