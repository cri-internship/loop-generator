#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(830, "random");
	float ***A = create_three_dim_float(480, 930, 580, "random");
	float ***D = create_three_dim_float(630, 100, 540, "random");
	float *C = create_one_dim_float(330, "random");

	for (int d = 5; d < 540; d++)
	  for (int c = 1; c < 100; c++)
	    for (int b = 4; b < 330; b++)
	      for (int a = 4; a < 330; a++)
	      {
	        
	       D[a][b][c]=D[a-3][b-1][c-3]*C[a]+B[a]/A[a][b][c];
	        
	       D[a][b][c]=0.542;
	        
	       float var_a=C[a]*0.234;
	       float var_b=C[a-4]-0.629;
	        
	       A[a][b][c]=A[a][b][c]*0.019;
	       D[a][b][c]=A[a][b+2][c+1]+B[a]-D[a][b][c]*C[a];
	      }

    return 0;
}