#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(710, 660, "zeros");
	float **B = create_two_dim_float(250, 940, "zeros");
	float **C = create_two_dim_float(430, 740, "zeros");
	float *A = create_one_dim_float(480, "zeros");

	for (int d = 0; d < 655; d++)
	  for (int c = 1; c < 249; c++)
	    for (int b = 1; b < 249; b++)
	      for (int a = 1; a < 249; a++)
	      {
	        
	       A[a]=A[a-1]*0.931;
	        
	       B[a][b]=B[a+1][b]+0.808;
	        
	       D[a][b]=A[a];
	       D[a+5][b+5]=C[a][b]/B[a][b];
	        
	       float var_a=C[a][b]-0.776;
	       float var_b=C[a-1][b]-0.404;
	        
	       float var_c=D[a][b]-0.357;
	       float var_d=D[a+2][b+1]/0.358;
	        
	       float var_e=C[a][b]/0.81;
	       float var_f=C[a+5][b+1]-0.632;
	      }

    return 0;
}