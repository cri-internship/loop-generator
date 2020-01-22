#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(470, 310, "zeros");
	float ***C = create_three_dim_float(230, 580, 40, "zeros");
	float *A = create_one_dim_float(670, "zeros");
	float **D = create_two_dim_float(550, 730, "zeros");
	float *B = create_one_dim_float(310, "zeros");

	for (int d = 2; d < 38; d++)
	  for (int c = 4; c < 309; c++)
	    for (int b = 5; b < 226; b++)
	      for (int a = 5; a < 226; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-4][c-2]+0.37;
	        
	       E[a][b]=E[a][b+1]-0.879*C[a][b][c];
	        
	       float var_a=B[a]+0.936;
	       float var_b=B[a+1]*0.548;
	        
	       float var_c=C[a][b][c]/0.415;
	       float var_d=C[a+4][b+3][c+2]/0.052;
	        
	       E[a][b]=E[a][b]/B[a]+D[a][b]-A[a];
	       A[a]=E[a-1][b-4]/0.51;
	      }

    return 0;
}