#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(810, 930, 230, "zeros");
	double **B = create_two_dim_double(990, 350, "zeros");

	for (int c = 3; c < 347; c++)
	  for (int b = 3; b < 985; b++)
	    for (int a = 3; a < 985; a++)
	    {
	      
	      B[a][b]=B[a-3][b-1]*0.257;
	      
	      B[a][b]=B[a][b-2]/0.584;
	      
	      B[a][b]=B[a+3][b+1]/0.128;
	      
	      double var_a=B[a][b]-0.857;
	      double var_b=B[a-3][b-3]/0.923;
	      
	      double var_c=B[a][b]/0.881;
	      double var_d=B[a+5][b+2]*0.185;
	      
	      A[a][b][c]=B[a][b]/A[a][b][c];
	      B[a][b]=B[a][b+3]/A[a][b][c];
	    }

    return 0;
}