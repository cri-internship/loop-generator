#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(150, "zeros");
	double *C = create_one_dim_double(50, "zeros");
	double ***D = create_three_dim_double(490, 400, 450, "zeros");
	double **B = create_two_dim_double(510, 200, "zeros");

	for (int d = 0; d < 448; d++)
	  for (int c = 4; c < 200; c++)
	    for (int b = 5; b < 150; b++)
	      for (int a = 5; a < 150; a++)
	      {
	        
	       B[a][b]=0.979;
	       B[a+5][b]=0.343;
	        
	       A[a]=0.801;
	       A[a-5]=0.303;
	        
	       double var_a=D[a][b][c]/0.164;
	       double var_b=D[a][b+1][c+2]/0.043;
	        
	       double var_c=A[a]*0.814;
	       double var_d=A[a-1]*0.074;
	        
	       B[a][b]=B[a][b]-C[a]+D[a][b][c]*A[a];
	       A[a]=B[a-1][b-4]/A[a]*D[a][b][c];
	      }

    return 0;
}