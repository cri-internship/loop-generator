#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(290, 910, "zeros");
	float **C = create_two_dim_float(30, 930, "zeros");
	float *A = create_one_dim_float(260, "zeros");

	for (int d = 5; d < 910; d++)
	  for (int c = 3; c < 30; c++)
	    for (int b = 3; b < 30; b++)
	      for (int a = 3; a < 30; a++)
	      {
	        
	       B[a][b]=C[a][b]-0.686;
	       B[a-3][b-2]=A[a]/C[a][b];
	        
	       C[a][b]=C[a][b]/0.041;
	       A[a]=C[a-3][b-2]-A[a];
	        
	       float var_a=B[a][b]+0.615;
	       float var_b=B[a-1][b-5]*0.445;
	      }

    return 0;
}