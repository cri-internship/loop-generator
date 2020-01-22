#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(690, "ones");
	float **C = create_two_dim_float(320, 290, "ones");
	float ***D = create_three_dim_float(400, 840, 370, "ones");
	float **B = create_two_dim_float(350, 1000, "ones");

	for (int d = 0; d < 286; d++)
	  for (int c = 4; c < 318; c++)
	    for (int b = 4; b < 318; b++)
	      for (int a = 4; a < 318; a++)
	      {
	        
	       A[a]=A[a-4]-C[a][b]+0.908*B[a][b];
	        
	       C[a][b]=C[a+2][b+3]-0.05;
	        
	       float var_a=C[a][b]*0.012;
	       float var_b=C[a+1][b+4]*0.976;
	      }

    return 0;
}