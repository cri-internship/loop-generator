#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(20, "zeros");
	float **A = create_two_dim_float(280, 120, "zeros");
	float ***E = create_three_dim_float(140, 710, 540, "zeros");
	float *C = create_one_dim_float(840, "zeros");
	float ***D = create_three_dim_float(180, 770, 290, "zeros");

	for (int b = 2; b < 710; b++)
	  for (int a = 4; a < 20; a++)
	  {
	    
	     D[a][b][a]=E[a][b][a]/C[a]+A[a][b]-B[a];
	     D[a-1][b-2][a-4]=C[a]-B[a];
	    
	     B[a]=D[a][b][a]-C[a]*0.337;
	     B[a-4]=A[a][b]+E[a][b][a]*D[a][b][a]/C[a];
	    
	     C[a]=A[a][b]-B[a];
	     C[a]=E[a][b][a]+0.655*B[a];
	    
	     float var_a=B[a]-0.348;
	     float var_b=B[a-4]+0.821;
	    
	     E[a][b][a]=E[a][b][a]*0.465;
	     A[a][b]=E[a-3][b-1][a]+C[a];
	  }

    return 0;
}