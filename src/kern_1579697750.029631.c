#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(20, "ones");
	float **B = create_two_dim_float(360, 30, "ones");

	for (int d = 1; d < 28; d++)
	  for (int c = 5; c < 20; c++)
	    for (int b = 5; b < 20; b++)
	      for (int a = 5; a < 20; a++)
	      {
	        
	       A[a]=A[a-2]-0.643;
	        
	       B[a][b]=B[a-5][b-1]+A[a];
	        
	       B[a][b]=B[a+5][b+2]+A[a];
	        
	       float var_a=B[a][b]*0.354;
	       float var_b=B[a+4][b+2]+0.61;
	        
	       float var_c=B[a][b]+0.206;
	       float var_d=B[a][b+2]+0.72;
	      }

    return 0;
}