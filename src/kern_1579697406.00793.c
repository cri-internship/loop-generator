#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(180, 670, "ones");
	double *B = create_one_dim_double(990, "ones");
	double ***A = create_three_dim_double(100, 80, 130, "ones");
	double ***D = create_three_dim_double(990, 320, 760, "ones");

	for (int c = 1; c < 130; c++)
	  for (int b = 4; b < 80; b++)
	    for (int a = 4; a < 100; a++)
	    {
	      
	      B[a]=A[a][b][c]/C[a][b];
	      D[a][b][c]=A[a-4][b-4][c-1]/B[a];
	      
	      double var_a=B[a]-0.342;
	      double var_b=B[a+2]/0.567;
	    }

    return 0;
}