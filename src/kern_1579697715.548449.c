#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(1000, "zeros");
	float *D = create_one_dim_float(680, "zeros");
	float *E = create_one_dim_float(30, "zeros");
	float *A = create_one_dim_float(600, "zeros");
	float **C = create_two_dim_float(220, 360, "zeros");

	for (int d = 0; d < 360; d++)
	  for (int c = 5; c < 30; c++)
	    for (int b = 5; b < 30; b++)
	      for (int a = 5; a < 30; a++)
	      {
	        
	       B[a]=B[a-4]/D[a]*C[a][b];
	        
	       D[a]=D[a-2]-B[a]*E[a]+A[a]/A[a];
	        
	       E[a]=E[a-3]/D[a]*B[a]+0.853;
	        
	       D[a]=D[a+2]*A[a]+0.836/C[a][b];
	        
	       float var_a=C[a][b]-0.408;
	       float var_b=C[a-5][b]*0.675;
	      }

    return 0;
}