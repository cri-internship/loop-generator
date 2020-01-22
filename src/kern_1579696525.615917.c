#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(660, 920, 810, "ones");
	float **D = create_two_dim_float(390, 920, "ones");
	float *A = create_one_dim_float(630, "ones");
	float **B = create_two_dim_float(80, 330, "ones");

	for (int d = 5; d < 810; d++)
	  for (int c = 3; c < 920; c++)
	    for (int b = 5; b < 390; b++)
	      for (int a = 5; a < 390; a++)
	      {
	        
	       D[a][b]=D[a-4][b-3]+0.687;
	        
	       C[a][b][c]=C[a-1][b][c]-0.303;
	        
	       A[a]=0.146;
	       A[a-5]=0.434;
	        
	       C[a][b][c]=0.266;
	        
	       float var_a=A[a]/0.322;
	       float var_b=A[a+1]/0.566;
	        
	       C[a][b][c]=A[a]+D[a][b]*C[a][b][c]-B[a][b];
	       A[a]=A[a+3]*B[a][b]-0.284;
	        
	       float var_c=C[a][b][c]/0.719;
	       float var_d=C[a-5][b][c-5]-0.073;
	      }

    return 0;
}