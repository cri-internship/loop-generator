#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(700, 310, "ones");
	double *A = create_one_dim_double(80, "ones");
	double ***D = create_three_dim_double(320, 440, 870, "ones");
	double ***B = create_three_dim_double(30, 910, 430, "ones");

	for (int d = 2; d < 426; d++)
	  for (int c = 4; c < 437; c++)
	    for (int b = 5; b < 25; b++)
	      for (int a = 5; a < 25; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b-4][c-2]-A[a]/C[a][b];
	        
	       D[a][b][c]=D[a-5][b-2][c-1]*0.99;
	        
	       B[a][b][c]=B[a-2][b][c]-0.62;
	        
	       D[a][b][c]=D[a+4][b+3][c+3]+0.723;
	        
	       double var_a=B[a][b][c]+0.415;
	       double var_b=B[a-3][b-4][c]/0.205;
	        
	       double var_c=B[a][b][c]+0.94;
	       double var_d=B[a+5][b+2][c]*0.787;
	        
	       A[a]=B[a][b][c]-D[a][b][c];
	       B[a][b][c]=B[a][b+2][c+4]-A[a]/D[a][b][c];
	      }

    return 0;
}