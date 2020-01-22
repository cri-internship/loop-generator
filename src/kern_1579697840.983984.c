#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(930, "zeros");
	float ***D = create_three_dim_float(990, 490, 770, "zeros");
	float ***C = create_three_dim_float(70, 210, 460, "zeros");
	float *B = create_one_dim_float(150, "zeros");
	float **E = create_two_dim_float(760, 220, "zeros");

	for (int b = 1; b < 210; b++)
	  for (int a = 5; a < 70; a++)
	  {
	    
	     B[a]=B[a-3]-0.031;
	    
	     B[a]=0.567;
	    
	     A[a]=A[a+2]+0.126;
	    
	     A[a]=E[a][b]-D[a][b][a]/B[a]+A[a]*0.171;
	     C[a][b][a]=E[a-4][b-1]-D[a][b][a]*B[a];
	    
	     float var_b=B[a]*0.526;
	     float var_c=B[a+4]-0.01;
	    
	     B[a]=C[a][b][a]+0.06-A[a];
	     D[a][b][a]=C[a-4][b][a-5]+A[a];
	  }

    return 0;
}