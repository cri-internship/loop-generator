#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(310, 160, 860, "random");
	float ***A = create_three_dim_float(50, 470, 110, "random");

	for (int d = 1; d < 106; d++)
	  for (int c = 4; c < 159; c++)
	    for (int b = 1; b < 47; b++)
	      for (int a = 1; a < 47; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-4][c-1]+A[a][b][c];
	        
	       B[a][b][c]=B[a+5][b+1][c+5]+0.801;
	        
	       float var_a=A[a][b][c]*0.772;
	       float var_b=A[a+3][b+4][c+4]/0.061;
	      }

    return 0;
}