#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(1000, 240, "random");
	float *B = create_one_dim_float(10, "random");

	for (int c = 4; c < 240; c++)
	  for (int b = 2; b < 10; b++)
	    for (int a = 2; a < 10; a++)
	    {
	      
	      A[a][b]=A[a][b-4]*B[a];
	      
	      float var_a=B[a]+0.714;
	      float var_b=B[a-2]+0.505;
	    }

    return 0;
}