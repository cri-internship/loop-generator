#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(880, 130, "ones");
	double ***B = create_three_dim_double(760, 230, 710, "ones");

	for (int c = 0; c < 705; c++)
	  for (int b = 5; b < 130; b++)
	    for (int a = 5; a < 760; a++)
	    {
	      
	      A[a][b]=A[a][b-5]-0.269;
	      
	      B[a][b][c]=B[a-5][b][c]/A[a][b];
	      
	      B[a][b][c]=0.139;
	      
	      double var_a=A[a][b]+0.09;
	      double var_b=A[a-1][b-2]/0.751;
	    }

    return 0;
}