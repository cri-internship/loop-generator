#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(770, "zeros");
	float *A = create_one_dim_float(360, "zeros");
	float ***C = create_three_dim_float(210, 660, 390, "zeros");

	for (int c = 0; c < 389; c++)
	  for (int b = 0; b < 659; b++)
	    for (int a = 4; a < 210; a++)
	    {
	      
	      B[a]=B[a-4]+C[a][b][c];
	      
	      B[a]=B[a+4]-0.138;
	      
	      A[a]=A[a+3]*0.197;
	      
	      C[a][b][c]=C[a][b+1][c+1]*A[a]/B[a];
	      
	      A[a]=0.195;
	      
	      float var_a=B[a]+0.676;
	      float var_b=B[a+1]/0.311;
	    }

    return 0;
}