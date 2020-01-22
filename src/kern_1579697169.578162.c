#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(460, 830, 300, "ones");
	double *E = create_one_dim_double(490, "ones");
	double **A = create_two_dim_double(920, 420, "ones");
	double ***C = create_three_dim_double(270, 180, 590, "ones");
	double **B = create_two_dim_double(230, 460, "ones");

	for (int d = 0; d < 296; d++)
	  for (int c = 0; c < 178; c++)
	    for (int b = 0; b < 266; b++)
	      for (int a = 0; a < 266; a++)
	      {
	        
	       D[a][b][c]=0.123;
	       D[a+1][b+1][c+4]=0.4;
	        
	       double var_a=C[a][b][c]*0.188;
	       double var_b=C[a+4][b+2][c+3]+0.159;
	      }

    return 0;
}