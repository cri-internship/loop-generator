#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(200, 40, "zeros");
	float ***C = create_three_dim_float(200, 780, 770, "zeros");
	float **A = create_two_dim_float(270, 850, "zeros");

	for (int d = 4; d < 770; d++)
	  for (int c = 4; c < 37; c++)
	    for (int b = 4; b < 199; b++)
	      for (int a = 4; a < 199; a++)
	      {
	        
	       A[a][b]=A[a][b-2]+0.502;
	        
	       B[a][b]=B[a-4][b-4]/C[a][b][c];
	        
	       C[a][b][c]=C[a-3][b][c-1]/A[a][b]-B[a][b];
	        
	       B[a][b]=B[a+1][b+3]*C[a][b][c]+A[a][b];
	        
	       C[a][b][c]=0.117;
	        
	       float var_a=A[a][b]/0.338;
	       float var_b=A[a-3][b-2]*0.694;
	      }

    return 0;
}