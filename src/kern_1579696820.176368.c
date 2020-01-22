#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(440, 680, "ones");
	double **E = create_two_dim_double(810, 310, "ones");
	double *D = create_one_dim_double(280, "ones");
	double **A = create_two_dim_double(230, 240, "ones");
	double *B = create_one_dim_double(950, "ones");

	for (int c = 0; c < 239; c++)
	  for (int b = 3; b < 227; b++)
	    for (int a = 3; a < 227; a++)
	    {
	      
	      E[a][b]=E[a-3][b]/C[a][b]*D[a]-B[a];
	      
	      C[a][b]=C[a+2][b+3]/0.143;
	      
	      D[a]=D[a+2]+0.385/E[a][b];
	      
	      A[a][b]=A[a+3][b+1]-0.706;
	      
	      D[a]=0.748;
	      
	      double var_a=D[a]+0.438;
	    }

    return 0;
}