#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(230, 500, 140, "zeros");
	double *B = create_one_dim_double(220, "zeros");

	for (int d = 2; d < 137; d++)
	  for (int c = 4; c < 499; c++)
	    for (int b = 2; b < 218; b++)
	      for (int a = 2; a < 218; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-3][c]+B[a];
	        
	       double var_a=B[a]/0.787;
	       B[a]=0.401;
	        
	       B[a]=B[a+2]-0.672;
	        
	       A[a][b][c]=0.23;
	        
	       B[a]=A[a][b][c]+B[a];
	       A[a][b][c]=A[a][b-4][c-2]+B[a];
	      }

    return 0;
}