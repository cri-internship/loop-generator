#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(180, 900, "zeros");
	double *C = create_one_dim_double(960, "zeros");
	double ***B = create_three_dim_double(360, 330, 740, "zeros");

	for (int d = 0; d < 736; d++)
	  for (int c = 0; c < 327; c++)
	    for (int b = 3; b < 175; b++)
	      for (int a = 3; a < 175; a++)
	      {
	        
	       C[a]=C[a+2]*A[a][b]/B[a][b][c];
	        
	       A[a][b]=A[a+5][b+2]+0.818;
	        
	       B[a][b][c]=A[a][b];
	       B[a+5][b+3][c+4]=0.531;
	        
	       double var_a=C[a]/0.126;
	       double var_b=C[a-3]-0.262;
	      }

    return 0;
}