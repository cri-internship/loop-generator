#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(310, 70, 960, "ones");

	for (int d = 1; d < 960; d++)
	  for (int c = 3; c < 69; c++)
	    for (int b = 5; b < 309; b++)
	      for (int a = 5; a < 309; a++)
	      {
	        
	       A[a][b][c]=0.245;
	       A[a-5][b-3][c-1]=0.589;
	        
	       float var_a=A[a][b][c]+0.928;
	       float var_b=A[a+1][b+1][c]-0.791;
	      }

    return 0;
}