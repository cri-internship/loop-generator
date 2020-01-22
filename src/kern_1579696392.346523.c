#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(450, 870, 950, "ones");
	double ***B = create_three_dim_double(140, 100, 80, "ones");

	for (int d = 0; d < 76; d++)
	  for (int c = 0; c < 97; c++)
	    for (int b = 4; b < 135; b++)
	      for (int a = 4; a < 135; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b][c]*B[a][b][c];
	        
	       A[a][b][c]=0.888;
	        
	       double var_a=B[a][b][c]+0.143;
	       double var_b=B[a+5][b+3][c+4]-0.213;
	      }

    return 0;
}