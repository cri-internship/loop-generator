#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(810, "random");
	float ***A = create_three_dim_float(920, 810, 360, "random");

	for (int d = 3; d < 358; d++)
	  for (int c = 5; c < 809; c++)
	    for (int b = 5; b < 810; b++)
	      for (int a = 5; a < 810; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-5][c-3]+0.809;
	        
	       A[a][b][c]=A[a-4][b-4][c-2]-B[a];
	        
	       A[a][b][c]=A[a+3][b+1][c+2]-B[a];
	        
	       B[a]=0.039;
	       B[a-4]=0.04;
	        
	       B[a]=0.845;
	        
	       float var_a=B[a]*0.879;
	       float var_b=B[a-5]/0.616;
	      }

    return 0;
}