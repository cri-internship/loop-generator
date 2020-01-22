#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(550, 680, "zeros");
	float ***A = create_three_dim_float(790, 360, 380, "zeros");
	float ***B = create_three_dim_float(690, 10, 120, "zeros");

	for (int d = 0; d < 117; d++)
	  for (int c = 3; c < 5; c++)
	    for (int b = 4; b < 550; b++)
	      for (int a = 4; a < 550; a++)
	      {
	        
	       C[a][b]=0.513;
	       C[a-4][b-3]=0.277;
	        
	       B[a][b][c]=C[a][b]-A[a][b][c];
	       B[a][b+5][c+3]=A[a][b][c]*0.973;
	      }

    return 0;
}