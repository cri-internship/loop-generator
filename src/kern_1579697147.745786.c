#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(120, "zeros");
	float *E = create_one_dim_float(270, "zeros");
	float *B = create_one_dim_float(350, "zeros");
	float ***D = create_three_dim_float(180, 210, 680, "zeros");
	float **A = create_two_dim_float(740, 440, "zeros");

	for (int d = 4; d < 440; d++)
	  for (int c = 5; c < 269; c++)
	    for (int b = 5; b < 269; b++)
	      for (int a = 5; a < 269; a++)
	      {
	        
	       B[a]=B[a+5]/C[a]-E[a]+A[a][b];
	        
	       E[a]=E[a+1]/B[a];
	        
	       float var_a=A[a][b]-0.355;
	       float var_b=A[a-5][b-4]/0.929;
	      }

    return 0;
}