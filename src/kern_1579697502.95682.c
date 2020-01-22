#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(800, 670, "ones");
	float *B = create_one_dim_float(360, "ones");

	for (int d = 3; d < 670; d++)
	  for (int c = 2; c < 360; c++)
	    for (int b = 2; b < 360; b++)
	      for (int a = 2; a < 360; a++)
	      {
	        
	       B[a]=B[a-1]*0.732;
	        
	       A[a][b]=0.706;
	       A[a+4][b]=0.145;
	        
	       float var_a=A[a][b]+0.252;
	       float var_b=A[a-1][b-3]*0.354;
	        
	       B[a]=B[a]-0.547;
	       A[a][b]=B[a-2]/A[a][b];
	      }

    return 0;
}