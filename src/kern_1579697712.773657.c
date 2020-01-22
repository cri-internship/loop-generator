#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(40, 980, "ones");
	float ***C = create_three_dim_float(50, 310, 630, "ones");
	float **B = create_two_dim_float(70, 920, "ones");

	for (int d = 3; d < 630; d++)
	  for (int c = 5; c < 310; c++)
	    for (int b = 5; b < 36; b++)
	      for (int a = 5; a < 36; a++)
	      {
	        
	       A[a][b]=A[a-2][b]-0.136;
	        
	       A[a][b]=0.947;
	        
	       C[a][b][c]=A[a][b];
	       C[a-3][b-5][c]=B[a][b];
	        
	       float var_a=A[a][b]+0.646;
	       float var_b=A[a-5][b]/0.731;
	        
	       float var_c=C[a][b][c]*0.124;
	       float var_d=C[a-1][b-5][c-3]+0.807;
	        
	       C[a][b][c]=B[a][b]+C[a][b][c]/0.236;
	       B[a][b]=B[a-1][b-5]*A[a][b];
	        
	       float var_e=A[a][b]*0.926;
	       float var_f=A[a+4][b+5]-0.337;
	      }

    return 0;
}