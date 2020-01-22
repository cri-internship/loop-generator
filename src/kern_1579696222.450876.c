#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(580, 20, 530, "zeros");
	float *A = create_one_dim_float(750, "zeros");

	for (int d = 4; d < 527; d++)
	  for (int c = 5; c < 16; c++)
	    for (int b = 5; b < 575; b++)
	      for (int a = 5; a < 575; a++)
	      {
	        
	       B[a][b][c]=B[a][b-5][c-4]-A[a];
	        
	       A[a]=A[a+5]+0.461;
	        
	       B[a][b][c]=B[a+4][b][c+1]/0.229;
	        
	       A[a]=A[a+3]-B[a][b][c];
	        
	       float var_a=B[a][b][c]/0.39;
	       float var_b=B[a+5][b+4][c+3]/0.679;
	      }

    return 0;
}