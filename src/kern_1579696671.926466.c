#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(860, 960, 910, "random");
	float **B = create_two_dim_float(770, 280, "random");
	float ***C = create_three_dim_float(350, 810, 700, "random");
	float **A = create_two_dim_float(170, 950, "random");

	for (int d = 4; d < 696; d++)
	  for (int c = 3; c < 809; c++)
	    for (int b = 3; b < 166; b++)
	      for (int a = 3; a < 166; a++)
	      {
	        
	       A[a][b]=A[a-3][b-3]*0.704;
	        
	       A[a][b]=A[a+4][b+5]+C[a][b][c];
	        
	       A[a][b]=A[a+3][b+2]*D[a][b][c]/B[a][b];
	        
	       C[a][b][c]=A[a][b];
	       C[a][b+1][c+4]=D[a][b][c];
	        
	       B[a][b]=D[a][b][c]*0.553/C[a][b][c]-B[a][b];
	       D[a][b][c]=D[a+3][b+4][c+2]+A[a][b]-C[a][b][c]/0.871;
	        
	       float var_a=D[a][b][c]+0.569;
	       float var_b=D[a-1][b-2][c-4]-0.172;
	      }

    return 0;
}