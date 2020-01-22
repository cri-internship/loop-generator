#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(940, 760, 20, "ones");
	double *B = create_one_dim_double(700, "ones");
	double *C = create_one_dim_double(260, "ones");

	for (int d = 3; d < 15; d++)
	  for (int c = 3; c < 757; c++)
	    for (int b = 1; b < 260; b++)
	      for (int a = 1; a < 260; a++)
	      {
	        
	       C[a]=B[a];
	       C[a]=C[a]/A[a][b][c];
	        
	       A[a][b][c]=A[a-1][b-3][c-3]/C[a]*B[a];
	        
	       A[a][b][c]=A[a][b+3][c+5]+C[a]/B[a];
	        
	       double var_a=B[a]/0.857;
	       double var_b=B[a+5]/0.436;
	      }

    return 0;
}