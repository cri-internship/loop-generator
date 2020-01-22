#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(990, "ones");
	double ***A = create_three_dim_double(790, 130, 860, "ones");
	double **B = create_two_dim_double(970, 100, "ones");
	double **C = create_two_dim_double(350, 610, "ones");

	for (int d = 2; d < 858; d++)
	  for (int c = 5; c < 129; c++)
	    for (int b = 4; b < 350; b++)
	      for (int a = 4; a < 350; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-1][c-2]-0.864;
	        
	       A[a][b][c]=A[a-1][b][c-1]/0.88;
	        
	       A[a][b][c]=A[a][b][c]-D[a]*B[a][b];
	       B[a][b]=A[a][b+1][c+2]+C[a][b]-D[a];
	        
	       double var_a=D[a]+0.288;
	       double var_b=D[a-4]/0.267;
	        
	       double var_c=C[a][b]/0.526;
	       double var_d=C[a-1][b-5]+0.061;
	      }

    return 0;
}