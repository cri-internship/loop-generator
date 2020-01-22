#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(20, 860, "zeros");
	float **C = create_two_dim_float(640, 270, "zeros");
	float *B = create_one_dim_float(720, "zeros");

	for (int d = 5; d < 856; d++)
	  for (int c = 2; c < 19; c++)
	    for (int b = 2; b < 19; b++)
	      for (int a = 2; a < 19; a++)
	      {
	        
	       B[a]=B[a-2]-C[a][b]+A[a][b];
	        
	       A[a][b]=0.68;
	       A[a][b-5]=0.745;
	        
	       float var_a=B[a]*0.531;
	       float var_b=B[a+2]+0.84;
	        
	       float var_c=A[a][b]/0.843;
	       float var_d=A[a+1][b+4]+0.902;
	      }

    return 0;
}