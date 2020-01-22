#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(970, 690, "zeros");
	float *E = create_one_dim_float(310, "zeros");
	float ***D = create_three_dim_float(130, 240, 810, "zeros");
	float ***B = create_three_dim_float(780, 290, 370, "zeros");
	float **A = create_two_dim_float(970, 260, "zeros");

	for (int d = 0; d < 370; d++)
	  for (int c = 3; c < 240; c++)
	    for (int b = 2; b < 130; b++)
	      for (int a = 2; a < 130; a++)
	      {
	        
	       C[a][b]=C[a][b+3]/D[a][b][c]+A[a][b]-E[a];
	        
	       E[a]=C[a][b]-B[a][b][c];
	       E[a+2]=C[a][b]+B[a][b][c]-D[a][b][c]/A[a][b];
	        
	       E[a]=0.224;
	        
	       C[a][b]=B[a][b][c]+C[a][b]/0.642;
	       A[a][b]=B[a+1][b+2][c]*A[a][b]-D[a][b][c]/C[a][b];
	        
	       float var_a=D[a][b][c]/0.316;
	       float var_b=D[a-2][b-3][c]/0.594;
	        
	       float var_c=A[a][b]*0.531;
	       float var_d=A[a][b-1]-0.322;
	      }

    return 0;
}