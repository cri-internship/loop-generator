#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(510, 280, 620, "ones");
	double **D = create_two_dim_double(690, 1000, "ones");
	double *B = create_one_dim_double(770, "ones");
	double *A = create_one_dim_double(140, "ones");

	for (int d = 0; d < 616; d++)
	  for (int c = 1; c < 276; c++)
	    for (int b = 5; b < 138; b++)
	      for (int a = 5; a < 138; a++)
	      {
	        
	       D[a][b]=D[a][b-1]/C[a][b][c]*B[a]+A[a];
	        
	       A[a]=A[a+2]+0.7;
	        
	       C[a][b][c]=0.486;
	       C[a+3][b+4][c+4]=0.443;
	        
	       double var_a=A[a]-0.224;
	       double var_b=A[a-5]/0.836;
	      }

    return 0;
}