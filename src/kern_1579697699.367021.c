#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(780, 960, "ones");
	float *D = create_one_dim_float(690, "ones");
	float *B = create_one_dim_float(790, "ones");
	float ***A = create_three_dim_float(620, 950, 800, "ones");

	for (int c = 3; c < 800; c++)
	  for (int b = 3; b < 950; b++)
	    for (int a = 4; a < 620; a++)
	    {
	      
	      C[a][b]=C[a-3][b-1]/0.879*A[a][b][c]-B[a];
	      
	      A[a][b][c]=A[a][b-3][c-2]/C[a][b]-D[a]+C[a][b];
	      
	      A[a][b][c]=A[a-3][b-1][c-3]*0.954;
	      
	      D[a]=C[a][b];
	      C[a][b]=D[a]/B[a];
	      
	      B[a]=B[a+5]+0.864;
	      
	      D[a]=D[a+4]-0.635;
	      
	      B[a]=0.743/A[a][b][c]*D[a];
	    }

    return 0;
}