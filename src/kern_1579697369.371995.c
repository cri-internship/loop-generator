#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(270, 750, 350, "zeros");
	float *B = create_one_dim_float(340, "zeros");
	float **C = create_two_dim_float(900, 20, "zeros");

	for (int d = 4; d < 350; d++)
	  for (int c = 0; c < 750; c++)
	    for (int b = 4; b < 270; b++)
	      for (int a = 4; a < 270; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b][c-4]*C[a][b]+B[a];
	        
	       float var_a=B[a]*0.82;
	       float var_b=B[a+4]/0.185;
	        
	       A[a][b][c]=B[a]+A[a][b][c]-C[a][b];
	       C[a][b]=B[a+3]*0.639;
	      }

    return 0;
}