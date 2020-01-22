#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(830, "random");
	float ***D = create_three_dim_float(780, 850, 600, "random");
	float ***C = create_three_dim_float(220, 810, 780, "random");
	float ***B = create_three_dim_float(800, 890, 430, "random");

	for (int d = 5; d < 430; d++)
	  for (int c = 5; c < 806; c++)
	    for (int b = 4; b < 219; b++)
	      for (int a = 4; a < 219; a++)
	      {
	        
	       D[a][b][c]=D[a-4][b-3][c-3]-0.174;
	        
	       C[a][b][c]=C[a-3][b-5][c-5]*A[a]/B[a][b][c];
	        
	       B[a][b][c]=B[a+5][b+5][c]+0.75;
	        
	       C[a][b][c]=0.733;
	        
	       B[a][b][c]=A[a]+C[a][b][c];
	       A[a]=A[a+2]+B[a][b][c];
	        
	       C[a][b][c]=D[a][b][c]+C[a][b][c]/A[a]-B[a][b][c];
	       D[a][b][c]=D[a+3][b+3][c+2]*B[a][b][c]/0.543-C[a][b][c];
	      }

    return 0;
}