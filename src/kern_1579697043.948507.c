#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(320, "zeros");
	float **C = create_two_dim_float(550, 320, "zeros");
	float **B = create_two_dim_float(710, 560, "zeros");

	for (int d = 4; d < 320; d++)
	  for (int c = 3; c < 320; c++)
	    for (int b = 3; b < 320; b++)
	      for (int a = 3; a < 320; a++)
	      {
	        
	       B[a][b]=B[a-2][b-4]*C[a][b]-A[a];
	        
	       A[a]=B[a][b];
	       A[a-1]=B[a][b]/C[a][b];
	        
	       float var_a=C[a][b]/0.763;
	       float var_b=C[a-3][b-3]*0.785;
	      }

    return 0;
}