#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(370, 310, 800, "ones");
	float *D = create_one_dim_float(670, "ones");
	float ***C = create_three_dim_float(240, 710, 180, "ones");
	float *B = create_one_dim_float(160, "ones");
	float *A = create_one_dim_float(700, "ones");

	for (int d = 5; d < 180; d++)
	  for (int c = 1; c < 710; c++)
	    for (int b = 5; b < 160; b++)
	      for (int a = 5; a < 160; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b-1][c-3]+0.822;
	        
	       B[a]=B[a-1]*A[a]-D[a]/E[a][b][c];
	        
	       C[a][b][c]=C[a-2][b][c-3]*B[a]+A[a]-D[a]/E[a][b][c];
	        
	       B[a]=0.903;
	        
	       float var_b=A[a]*0.433;
	       float var_c=A[a+3]*0.847;
	        
	       D[a]=C[a][b][c]/D[a]+B[a]-E[a][b][c]*A[a];
	       C[a][b][c]=C[a-5][b][c-5]/A[a]*0.173+E[a][b][c]-D[a];
	      }

    return 0;
}