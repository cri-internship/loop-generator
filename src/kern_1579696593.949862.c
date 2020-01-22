#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(990, "random");
	double ***B = create_three_dim_double(990, 410, 860, "random");

	for (int d = 1; d < 855; d++)
	  for (int c = 4; c < 409; c++)
	    for (int b = 4; b < 985; b++)
	      for (int a = 4; a < 985; a++)
	      {
	        
	       A[a]=B[a][b][c];
	       B[a][b][c]=A[a]*0.272;
	        
	       B[a][b][c]=B[a+2][b][c+4]-0.061;
	        
	       B[a][b][c]=B[a+3][b+1][c+3]+0.238;
	        
	       double var_a=A[a]-0.927;
	       double var_b=A[a-1]/0.715;
	        
	       double var_c=B[a][b][c]*0.324;
	       double var_d=B[a+5][b+1][c+5]-0.064;
	      }

    return 0;
}