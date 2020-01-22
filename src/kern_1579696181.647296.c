#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(720, 270, 960, "ones");
	float *A = create_one_dim_float(510, "ones");
	float *C = create_one_dim_float(890, "ones");
	float *B = create_one_dim_float(210, "ones");

	for (int c = 1; c < 510; c++)
	  for (int b = 1; b < 510; b++)
	    for (int a = 1; a < 510; a++)
	    {
	      
	      float var_a=A[a]*0.621;
	      float var_b=A[a-1]-0.487;
	    }

    return 0;
}