#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(790, 490, "ones");
	double ***D = create_three_dim_double(380, 640, 300, "ones");
	double ***A = create_three_dim_double(800, 630, 490, "ones");
	double ***C = create_three_dim_double(900, 760, 250, "ones");

	for (int d = 2; d < 300; d++)
	  for (int c = 4; c < 488; c++)
	    for (int b = 3; b < 378; b++)
	      for (int a = 3; a < 378; a++)
	      {
	        
	       D[a][b][c]=D[a+2][b+1][c]-0.184;
	        
	       B[a][b]=D[a][b][c];
	       B[a+3][b+2]=C[a][b][c];
	        
	       double var_a=D[a][b][c]-0.979;
	       double var_b=D[a-3][b-4][c-2]*0.004;
	      }

    return 0;
}