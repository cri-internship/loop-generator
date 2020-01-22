#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(20, 650, 380, "zeros");
	double **B = create_two_dim_double(370, 620, "zeros");
	double **A = create_two_dim_double(110, 810, "zeros");

	for (int d = 0; d < 377; d++)
	  for (int c = 5; c < 616; c++)
	    for (int b = 3; b < 16; b++)
	      for (int a = 3; a < 16; a++)
	      {
	        
	       A[a][b]=A[a-1][b]-0.882;
	        
	       B[a][b]=B[a-1][b-5]/0.283;
	        
	       C[a][b][c]=C[a+4][b+3][c]-0.817;
	        
	       C[a][b][c]=C[a+4][b+1][c+3]*B[a][b]-A[a][b];
	        
	       double var_a=B[a][b]/0.841;
	       double var_b=B[a+5][b+4]/0.741;
	        
	       double var_c=B[a][b]+0.951;
	       double var_d=B[a-3][b-1]-0.436;
	        
	       double var_e=A[a][b]-0.848;
	       double var_f=A[a][b+2]*0.838;
	      }

    return 0;
}