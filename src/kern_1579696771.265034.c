#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(20, 570, 70, "zeros");
	double ***A = create_three_dim_double(970, 310, 660, "zeros");

	for (int d = 0; d < 66; d++)
	  for (int c = 0; c < 310; c++)
	    for (int b = 0; b < 15; b++)
	      for (int a = 0; a < 15; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b][c+3]/0.587;
	        
	       double var_a=B[a][b][c]-0.625;
	       double var_b=B[a+5][b][c+4]-0.614;
	        
	       B[a][b][c]=A[a][b][c]*B[a][b][c];
	       A[a][b][c]=A[a][b][c+2]/B[a][b][c];
	      }

    return 0;
}