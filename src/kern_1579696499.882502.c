#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(970, 450, "ones");
	float *A = create_one_dim_float(80, "ones");
	float ***B = create_three_dim_float(620, 430, 290, "ones");

	for (int d = 3; d < 286; d++)
	  for (int c = 4; c < 428; c++)
	    for (int b = 5; b < 616; b++)
	      for (int a = 5; a < 616; a++)
	      {
	        
	       C[a][b]=C[a-1][b-4]-0.674;
	        
	       B[a][b][c]=B[a+4][b+2][c+4]*0.4;
	        
	       B[a][b][c]=A[a]*C[a][b];
	        
	       B[a][b][c]=C[a][b]-B[a][b][c];
	       C[a][b]=C[a-5][b-3]*A[a]/0.957;
	        
	       float var_a=B[a][b][c]+0.197;
	       float var_b=B[a-5][b-2][c-3]+0.698;
	      }

    return 0;
}