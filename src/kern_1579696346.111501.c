#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(420, "random");
	float ***E = create_three_dim_float(460, 950, 60, "random");
	float ***D = create_three_dim_float(350, 90, 120, "random");
	float *B = create_one_dim_float(690, "random");
	float ***C = create_three_dim_float(230, 250, 740, "random");

	for (int d = 1; d < 60; d++)
	  for (int c = 3; c < 87; c++)
	    for (int b = 5; b < 346; b++)
	      for (int a = 5; a < 346; a++)
	      {
	        
	       B[a]=B[a-5]-0.601;
	        
	       E[a][b][c]=E[a-2][b-2][c-1]-D[a][b][c]*C[a][b][c]+B[a]/A[a];
	        
	       E[a][b][c]=E[a-1][b-3][c-1]*0.692;
	        
	       A[a]=A[a+1]*E[a][b][c]/B[a]+C[a][b][c];
	        
	       B[a]=0.789;
	        
	       float var_a=D[a][b][c]-0.602;
	       float var_b=D[a+4][b+3][c+4]+0.201;
	      }

    return 0;
}