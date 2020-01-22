#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(800, "random");
	float **B = create_two_dim_float(100, 270, "random");

	for (int c = 4; c < 266; c++)
	  for (int b = 4; b < 97; b++)
	    for (int a = 4; a < 97; a++)
	    {
	      
	      A[a]=A[a-4]*0.457;
	      
	      B[a][b]=B[a][b-4]/0.396;
	      
	      float var_a=B[a][b]-0.192;
	      float var_b=B[a+3][b+4]+0.009;
	    }

    return 0;
}