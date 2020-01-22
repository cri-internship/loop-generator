#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(160, 740, 70, "ones");
	float ***A = create_three_dim_float(530, 820, 200, "ones");
	float *B = create_one_dim_float(240, "ones");
	float ***C = create_three_dim_float(80, 150, 850, "ones");
	float **D = create_two_dim_float(470, 990, "ones");

	for (int d = 5; d < 65; d++)
	  for (int c = 5; c < 150; c++)
	    for (int b = 5; b < 80; b++)
	      for (int a = 5; a < 80; a++)
	      {
	        
	       C[a][b][c]=C[a-4][b-4][c-5]*0.282;
	        
	       B[a]=B[a-1]/0.329;
	        
	       E[a][b][c]=E[a+2][b+4][c+5]-0.302;
	        
	       B[a]=D[a][b]+0.385;
	       D[a][b]=D[a-5][b-5]*C[a][b][c];
	        
	       float var_a=D[a][b]*0.874;
	       float var_b=D[a+1][b+3]+0.362;
	        
	       A[a][b][c]=D[a][b]+A[a][b][c]-0.132/C[a][b][c]*B[a];
	       C[a][b][c]=D[a-4][b]/0.893;
	      }

    return 0;
}