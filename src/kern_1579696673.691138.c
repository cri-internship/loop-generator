#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(710, "ones");
	double ***B = create_three_dim_double(500, 810, 930, "ones");
	double ***A = create_three_dim_double(710, 490, 1000, "ones");

	for (int c = 0; c < 999; c++)
	  for (int b = 0; b < 485; b++)
	    for (int a = 0; a < 705; a++)
	    {
	      
	      C[a]=0.191;
	      float  var_a=C[a]-0.416;
	      
	      C[a]=C[a+5]+0.736;
	      
	      A[a][b][c]=A[a+2][b+3][c]-0.808;
	      
	      A[a][b][c]=A[a+1][b+3][c+1]*C[a]/C[a];
	      
	      double var_b=A[a][b][c]/0.853;
	      double var_c=A[a][b+5][c+1]*0.822;
	    }

    return 0;
}