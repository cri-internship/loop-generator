#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(610, 310, "ones");
	double **B = create_two_dim_double(410, 500, "ones");
	double ***D = create_three_dim_double(230, 740, 230, "ones");
	double *C = create_one_dim_double(610, "ones");

	for (int c = 4; c < 230; c++)
	  for (int b = 3; b < 500; b++)
	    for (int a = 5; a < 230; a++)
	    {
	      
	      B[a][b]=B[a-1][b-2]-0.474;
	      
	      C[a]=0.988;
	      C[a-5]=0.825;
	      
	      double var_a=D[a][b][c]*0.953;
	      double var_b=D[a-4][b-3][c-4]/0.011;
	    }

    return 0;
}