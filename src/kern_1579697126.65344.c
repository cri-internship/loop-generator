#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(300, "ones");
	double **B = create_two_dim_double(190, 580, "ones");
	double ***C = create_three_dim_double(600, 510, 840, "ones");

	for (int d = 0; d < 838; d++)
	  for (int c = 1; c < 508; c++)
	    for (int b = 5; b < 186; b++)
	      for (int a = 5; a < 186; a++)
	      {
	        
	       A[a]=A[a-5]+B[a][b]/C[a][b][c];
	        
	       C[a][b][c]=0.162;
	       C[a+1][b+2][c+2]=0.389;
	        
	       B[a][b]=0.711;
	       B[a+2][b+4]=0.832;
	        
	       B[a][b]=B[a][b]+A[a]/C[a][b][c];
	       A[a]=B[a-3][b-1]+0.098;
	        
	       double var_a=B[a][b]+0.544;
	       double var_b=B[a+4][b+5]/0.514;
	        
	       C[a][b][c]=A[a]*C[a][b][c];
	       C[a][b][c]=A[a-2]*B[a][b]/C[a][b][c];
	      }

    return 0;
}