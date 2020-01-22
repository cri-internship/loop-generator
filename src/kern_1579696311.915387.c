#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(770, 360, "random");
	float **A = create_two_dim_float(490, 660, "random");

	for (int c = 2; c < 360; c++)
	  for (int b = 2; b < 486; b++)
	    for (int a = 2; a < 486; a++)
	    {
	      
	      B[a][b]=B[a-2][b-2]*A[a][b];
	      
	      A[a][b]=A[a][b-1]*0.867;
	      
	      A[a][b]=A[a+1][b+3]*B[a][b];
	      
	      A[a][b]=A[a+4][b+1]/0.016;
	      
	      float var_a=A[a][b]+0.627;
	      float var_b=A[a][b+2]+0.167;
	    }

    return 0;
}