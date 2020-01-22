#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(30, 990, "random");
	float *B = create_one_dim_float(40, "random");

	for (int c = 0; c < 987; c++)
	  for (int b = 1; b < 26; b++)
	    for (int a = 1; a < 26; a++)
	    {
	      
	      B[a]=0.706;
	      float  var_a=B[a]*0.715;
	      
	      B[a]=A[a][b];
	      
	      B[a]=A[a][b]/B[a];
	      A[a][b]=A[a+4][b+3]/0.325;
	      
	      float var_b=B[a]/0.754;
	      float var_c=B[a-1]+0.147;
	    }

    return 0;
}