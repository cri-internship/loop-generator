#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(420, 680, "ones");
	float *A = create_one_dim_float(200, "ones");

	for (int c = 3; c < 679; c++)
	  for (int b = 5; b < 418; b++)
	    for (int a = 5; a < 418; a++)
	    {
	      
	      B[a][b]=B[a+2][b+1]*0.907;
	      
	      float var_a=B[a][b]-0.408;
	      float var_b=B[a-5][b-3]*0.061;
	    }

    return 0;
}