#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(660, 880, "ones");
	float **A = create_two_dim_float(430, 480, "ones");

	for (int d = 5; d < 480; d++)
	  for (int c = 5; c < 426; c++)
	    for (int b = 5; b < 426; b++)
	      for (int a = 5; a < 426; a++)
	      {
	        
	       B[a][b]=B[a-5][b-1]+A[a][b];
	        
	       A[a][b]=A[a+2][b]/0.036;
	        
	       B[a][b]=A[a][b]-B[a][b];
	       A[a][b]=A[a-2][b-5]-B[a][b];
	        
	       float var_a=A[a][b]-0.866;
	       float var_b=A[a+4][b]+0.214;
	      }

    return 0;
}