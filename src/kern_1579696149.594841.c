#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(790, 70, 310, "zeros");
	double *A = create_one_dim_double(520, "zeros");

	for (int d = 5; d < 310; d++)
	  for (int c = 4; c < 68; c++)
	    for (int b = 5; b < 520; b++)
	      for (int a = 5; a < 520; a++)
	      {
	        
	       A[a]=A[a-4]+0.621;
	        
	       A[a]=B[a][b][c];
	        
	       B[a][b][c]=A[a];
	       B[a+2][b+2][c]=A[a];
	        
	       B[a][b][c]=0.902;
	        
	       double var_a=B[a][b][c]/0.919;
	       double var_b=B[a-1][b][c-1]*0.519;
	      }

    return 0;
}