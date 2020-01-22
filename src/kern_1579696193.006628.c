#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(20, "zeros");
	float **B = create_two_dim_float(620, 920, "zeros");

	for (int d = 5; d < 920; d++)
	  for (int c = 5; c < 19; c++)
	    for (int b = 5; b < 19; b++)
	      for (int a = 5; a < 19; a++)
	      {
	        
	       A[a]=A[a-3]+0.626;
	        
	       B[a][b]=B[a-4][b-3]-0.919;
	        
	       A[a]=A[a+1]*B[a][b];
	        
	       float var_a=B[a][b]-0.015;
	       float var_b=B[a-2][b-5]-0.489;
	        
	       B[a][b]=B[a][b]*A[a];
	       A[a]=B[a-5][b-1]*A[a];
	        
	       B[a][b]=A[a]/0.797;
	      }

    return 0;
}