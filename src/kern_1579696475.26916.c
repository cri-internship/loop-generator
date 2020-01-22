#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(380, 200, 360, "zeros");
	float *D = create_one_dim_float(150, "zeros");
	float *E = create_one_dim_float(640, "zeros");
	float ***A = create_three_dim_float(190, 850, 800, "zeros");
	float *B = create_one_dim_float(660, "zeros");

	for (int c = 2; c < 360; c++)
	  for (int b = 2; b < 200; b++)
	    for (int a = 4; a < 150; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-2][c-2]+E[a];
	      
	      B[a]=0.782;
	      float  var_a=B[a]+0.479;
	      
	      E[a]=E[a+5]-D[a]+C[a][b][c]/B[a];
	      
	      float var_b=D[a]-0.597;
	      D[a]=0.266;
	      
	      D[a]=B[a]+A[a][b][c]/D[a];
	      B[a]=D[a]+E[a];
	      
	      C[a][b][c]=E[a]/A[a][b][c];
	      
	      E[a]=0.19;
	    }

    return 0;
}