#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(200, 940, 490, "ones");
	float **B = create_two_dim_float(380, 960, "ones");

	for (int d = 1; d < 490; d++)
	  for (int c = 5; c < 940; c++)
	    for (int b = 2; b < 200; b++)
	      for (int a = 2; a < 200; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b][c-1]/0.644;
	        
	       B[a][b]=0.789;
	       B[a+5][b+4]=A[a][b][c];
	        
	       A[a][b][c]=0.018;
	        
	       float var_a=B[a][b]/0.561;
	       float var_b=B[a+2][b+5]/0.406;
	      }

    return 0;
}