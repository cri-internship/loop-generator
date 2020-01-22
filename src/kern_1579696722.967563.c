#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(470, 330, 690, "zeros");

	for (int d = 0; d < 686; d++)
	  for (int c = 1; c < 326; c++)
	    for (int b = 4; b < 465; b++)
	      for (int a = 4; a < 465; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-1][c]-0.135;
	        
	       A[a][b][c]=A[a+5][b+3][c+2]-0.463;
	        
	       float var_a=A[a][b][c]*0.948;
	       float var_b=A[a][b+1][c]-0.543;
	      }

    return 0;
}