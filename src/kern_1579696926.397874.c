#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(960, 260, "ones");
	float **B = create_two_dim_float(910, 200, "ones");
	float ***C = create_three_dim_float(660, 670, 980, "ones");

	for (int d = 4; d < 976; d++)
	  for (int c = 5; c < 196; c++)
	    for (int b = 5; b < 659; b++)
	      for (int a = 5; a < 659; a++)
	      {
	        
	       B[a][b]=B[a+1][b+4]+0.309;
	        
	       C[a][b][c]=C[a+1][b+3][c+4]*0.77;
	        
	       C[a][b][c]=0.13;
	        
	       A[a][b]=B[a][b]/B[a][b];
	       A[a+2][b]=C[a][b][c];
	        
	       float var_a=B[a][b]+0.542;
	       float var_b=B[a-3][b-3]/0.332;
	        
	       A[a][b]=A[a][b]*C[a][b][c]/0.205;
	       B[a][b]=A[a+3][b+4]/0.438;
	        
	       C[a][b][c]=C[a][b][c]*0.29+A[a][b];
	       B[a][b]=C[a-5][b-5][c-3]*0.862;
	      }

    return 0;
}