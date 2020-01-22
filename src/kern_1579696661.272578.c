#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(730, "ones");
	float **B = create_two_dim_float(540, 720, "ones");

	for (int d = 4; d < 719; d++)
	  for (int c = 3; c < 536; c++)
	    for (int b = 3; b < 536; b++)
	      for (int a = 3; a < 536; a++)
	      {
	        
	       A[a]=A[a+1]+B[a][b];
	        
	       A[a]=A[a+2]+B[a][b];
	        
	       B[a][b]=0.64;
	       B[a+4][b+1]=0.625;
	        
	       float var_a=B[a][b]*0.88;
	       float var_b=B[a-3][b-4]/0.266;
	        
	       B[a][b]=B[a][b]+0.137;
	       A[a]=B[a+2][b]*A[a];
	      }

    return 0;
}