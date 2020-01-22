#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(590, 750, "ones");
	double **C = create_two_dim_double(810, 260, "ones");
	double *A = create_one_dim_double(600, "ones");

	for (int c = 3; c < 260; c++)
	  for (int b = 5; b < 585; b++)
	    for (int a = 5; a < 585; a++)
	    {
	      
	      C[a][b]=0.949;
	      C[a-4][b-3]=0.822;
	      
	      B[a][b]=0.014;
	      B[a][b]=0.082;
	      
	      double var_a=B[a][b]-0.216;
	      double var_b=B[a-5][b-3]+0.466;
	      
	      B[a][b]=B[a][b]-0.913;
	      A[a]=B[a+5][b+1]+C[a][b];
	    }

    return 0;
}