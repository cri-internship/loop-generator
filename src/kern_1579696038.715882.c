#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(480, 240, 680, "zeros");
	double **C = create_two_dim_double(630, 80, "zeros");
	double **A = create_two_dim_double(380, 170, "zeros");

	for (int d = 3; d < 676; d++)
	  for (int c = 4; c < 80; c++)
	    for (int b = 4; b < 476; b++)
	      for (int a = 4; a < 476; a++)
	      {
	        
	       C[a][b]=C[a-4][b-3]*0.256;
	        
	       B[a][b][c]=B[a-2][b-2][c-2]/0.291;
	        
	       C[a][b]=C[a-1][b-1]*0.053;
	        
	       B[a][b][c]=B[a+4][b+1][c+4]+C[a][b];
	        
	       double var_a=B[a][b][c]-0.066;
	       double var_b=B[a-3][b-4][c]+0.409;
	      }

    return 0;
}