#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(490, 90, 190, "random");
	float ***B = create_three_dim_float(310, 980, 580, "random");

	for (int d = 5; d < 190; d++)
	  for (int c = 5; c < 89; c++)
	    for (int b = 4; b < 305; b++)
	      for (int a = 4; a < 305; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-1][c-2]/0.405;
	        
	       B[a][b][c]=B[a-1][b-4][c-4]+A[a][b][c];
	        
	       A[a][b][c]=A[a][b+1][c]*0.252;
	        
	       B[a][b][c]=0.456;
	        
	       float var_a=B[a][b][c]*0.54;
	       float var_b=B[a+5][b+3][c+3]/0.59;
	      }

    return 0;
}