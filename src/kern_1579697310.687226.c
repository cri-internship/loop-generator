#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(780, 150, 780, "random");
	float *B = create_one_dim_float(870, "random");

	for (int d = 5; d < 780; d++)
	  for (int c = 3; c < 150; c++)
	    for (int b = 3; b < 780; b++)
	      for (int a = 3; a < 780; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b][c]+0.917;
	        
	       A[a][b][c]=B[a]+A[a][b][c];
	       B[a]=A[a][b][c];
	        
	       float var_a=B[a]/0.646;
	       float var_b=B[a+1]-0.049;
	      }

    return 0;
}