#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(400, 360, 130, "zeros");
	float **B = create_two_dim_float(100, 160, "zeros");
	float ***E = create_three_dim_float(60, 680, 140, "zeros");
	float *A = create_one_dim_float(170, "zeros");
	float *C = create_one_dim_float(630, "zeros");

	for (int b = 4; b < 360; b++)
	  for (int a = 5; a < 60; a++)
	  {
	    
	     E[a][b][a]=E[a-3][b-1][a-5]/0.978;
	    
	     C[a]=C[a-2]/0.812;
	    
	     D[a][b][a]=D[a-4][b-4][a-3]+0.197;
	    
	     C[a]=0.689;
	    
	     C[a]=C[a]/0.193;
	     E[a][b][a]=C[a+2]/B[a][b];
	    
	     B[a][b]=C[a]*D[a][b][a]/A[a]+B[a][b]-A[a];
	     A[a]=C[a-5]/E[a][b][a];
	  }

    return 0;
}