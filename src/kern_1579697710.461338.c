#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(660, "zeros");
	double ***C = create_three_dim_double(990, 810, 710, "zeros");
	double **A = create_two_dim_double(290, 250, "zeros");

	for (int c = 0; c < 705; c++)
	  for (int b = 0; b < 248; b++)
	    for (int a = 0; a < 290; a++)
	    {
	      
	      A[a][b]=A[a][b+2]-0.284;
	      
	      double var_a=C[a][b][c]-0.731;
	      double var_b=C[a+1][b+4][c+5]+0.616;
	    }

    return 0;
}