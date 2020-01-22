#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(50, 30, 950, "zeros");
	double *C = create_one_dim_double(800, "zeros");
	double ***A = create_three_dim_double(970, 100, 910, "zeros");

	for (int d = 2; d < 910; d++)
	  for (int c = 4; c < 30; c++)
	    for (int b = 5; b < 50; b++)
	      for (int a = 5; a < 50; a++)
	      {
	        
	       B[a][b][c]=B[a][b-4][c]-0.932;
	        
	       A[a][b][c]=A[a-5][b-4][c-2]/C[a];
	        
	       double var_a=C[a]/0.622;
	       double var_b=C[a+2]+0.539;
	      }

    return 0;
}