#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(140, 160, 830, "zeros");
	float *B = create_one_dim_float(190, "zeros");

	for (int d = 1; d < 825; d++)
	  for (int c = 4; c < 155; c++)
	    for (int b = 5; b < 137; b++)
	      for (int a = 5; a < 137; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-2][c-1]-0.016;
	        
	       B[a]=B[a-5]+A[a][b][c];
	        
	       A[a][b][c]=A[a-2][b-1][c-1]+B[a];
	        
	       B[a]=B[a+5]+A[a][b][c];
	        
	       A[a][b][c]=A[a+3][b+5][c+5]/0.456;
	        
	       float var_a=A[a][b][c]-0.695;
	       float var_b=A[a-5][b-4][c]/0.057;
	      }

    return 0;
}