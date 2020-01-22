#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(680, 230, "ones");
	float ***A = create_three_dim_float(710, 160, 490, "ones");

	for (int d = 2; d < 487; d++)
	  for (int c = 3; c < 155; c++)
	    for (int b = 4; b < 676; b++)
	      for (int a = 4; a < 676; a++)
	      {
	        
	       B[a][b]=B[a-1][b-2]*0.133;
	        
	       A[a][b][c]=A[a-4][b-3][c-2]-0.541;
	        
	       B[a][b]=B[a+4][b]/0.359;
	        
	       A[a][b][c]=B[a][b];
	        
	       float var_a=A[a][b][c]+0.683;
	       float var_b=A[a+3][b+3][c+1]+0.222;
	      }

    return 0;
}