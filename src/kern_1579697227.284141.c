#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(680, 910, 810, "ones");
	double **C = create_two_dim_double(380, 150, "ones");
	double **A = create_two_dim_double(850, 410, "ones");
	double *B = create_one_dim_double(290, "ones");
	double **D = create_two_dim_double(410, 60, "ones");

	for (int d = 0; d < 806; d++)
	  for (int c = 4; c < 58; c++)
	    for (int b = 4; b < 286; b++)
	      for (int a = 4; a < 286; a++)
	      {
	        
	       A[a][b]=A[a-4][b-4]*B[a];
	        
	       E[a][b][c]=E[a][b][c]+D[a][b];
	       B[a]=E[a][b+2][c+4]/A[a][b]+C[a][b]*0.009-A[a][b];
	        
	       double var_a=D[a][b]/0.815;
	       double var_b=D[a][b+2]-0.464;
	        
	       double var_c=B[a]+0.926;
	       double var_d=B[a+4]+0.777;
	        
	       C[a][b]=A[a][b]+0.353-C[a][b]*E[a][b][c]/D[a][b];
	       D[a][b]=A[a-4][b]-D[a][b]*B[a]+0.957/E[a][b][c];
	      }

    return 0;
}