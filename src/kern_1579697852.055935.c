#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(70, 790, 940, "zeros");
	double *A = create_one_dim_double(10, "zeros");

	for (int d = 0; d < 940; d++)
	  for (int c = 5; c < 790; c++)
	    for (int b = 4; b < 5; b++)
	      for (int a = 4; a < 5; a++)
	      {
	        
	       A[a]=A[a-4]-B[a][b][c];
	        
	       A[a]=A[a-3]-0.582;
	        
	       A[a]=A[a+5]+0.298;
	        
	       A[a]=A[a]/B[a][b][c];
	        
	       double var_a=B[a][b][c]/0.048;
	       double var_b=B[a][b-5][c]*0.893;
	      }

    return 0;
}