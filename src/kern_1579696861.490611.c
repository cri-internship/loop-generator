#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(680, 810, 260, "ones");
	double *A = create_one_dim_double(950, "ones");
	double **C = create_two_dim_double(110, 480, "ones");

	for (int c = 1; c < 480; c++)
	  for (int b = 5; b < 110; b++)
	    for (int a = 5; a < 110; a++)
	    {
	      
	      C[a][b]=C[a-1][b-1]+B[a][b][c];
	      
	      A[a]=A[a+4]+0.158;
	      
	      double var_a=A[a]-0.192;
	      double var_b=A[a-5]+0.226;
	    }

    return 0;
}