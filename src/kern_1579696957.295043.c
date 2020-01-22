#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(790, "zeros");
	float **C = create_two_dim_float(850, 310, "zeros");
	float ***E = create_three_dim_float(250, 780, 920, "zeros");
	float ***D = create_three_dim_float(60, 440, 980, "zeros");
	float *A = create_one_dim_float(560, "zeros");

	for (int b = 3; b < 305; b++)
	  for (int a = 5; a < 56; a++)
	  {
	    
	     B[a]=B[a-3]+0.925;
	    
	     E[a][b][a]=E[a-5][b-3][a]*C[a][b]-B[a]/A[a];
	    
	     C[a][b]=C[a-4][b-2]-0.878;
	    
	     A[a]=0.188;
	     A[a-5]=0.793;
	    
	     C[a][b]=0.59;
	    
	     float var_a=D[a][b][a]*0.739;
	     float var_b=D[a][b+2][a+4]+0.518;
	  }

    return 0;
}