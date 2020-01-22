#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(540, "random");
	float **A = create_two_dim_float(860, 360, "random");

	for (int d = 5; d < 356; d++)
	  for (int c = 5; c < 536; c++)
	    for (int b = 5; b < 536; b++)
	      for (int a = 5; a < 536; a++)
	      {
	        
	       B[a]=B[a-5]+0.419;
	        
	       A[a][b]=A[a+2][b+4]*0.126;
	        
	       B[a]=A[a][b];
	        
	       A[a][b]=A[a][b]*B[a];
	       B[a]=A[a-1][b-5]+B[a];
	        
	       float var_a=A[a][b]*0.425;
	       float var_b=A[a+2][b+3]-0.43;
	      }

    return 0;
}