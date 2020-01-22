#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(490, "zeros");
	double ***B = create_three_dim_double(600, 810, 940, "zeros");

	for (int c = 1; c < 937; c++)
	  for (int b = 1; b < 805; b++)
	    for (int a = 5; a < 486; a++)
	    {
	      
	      B[a][b][c]=B[a+3][b+5][c+3]/0.449;
	      
	      B[a][b][c]=0.356;
	      
	      A[a]=0.702;
	      A[a+4]=B[a][b][c];
	      
	      double var_a=B[a][b][c]/0.555;
	      double var_b=B[a-5][b-1][c-1]*0.718;
	    }

    return 0;
}