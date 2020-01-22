#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(860, 430, "zeros");
	float **C = create_two_dim_float(880, 640, "zeros");
	float *D = create_one_dim_float(380, "zeros");
	float *A = create_one_dim_float(660, "zeros");

	for (int d = 0; d < 425; d++)
	  for (int c = 1; c < 380; c++)
	    for (int b = 1; b < 380; b++)
	      for (int a = 1; a < 380; a++)
	      {
	        
	       float var_a=D[a]*0.426;
	       D[a]=0.071;
	        
	       B[a][b]=B[a+1][b]-A[a];
	        
	       A[a]=0.338;
	       A[a-1]=0.233;
	        
	       B[a][b]=0.97-C[a][b]/C[a][b];
	      }

    return 0;
}