#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(640, 830, 40, "zeros");
	float *A = create_one_dim_float(330, "zeros");
	float **B = create_two_dim_float(10, 490, "zeros");
	float ***E = create_three_dim_float(560, 890, 230, "zeros");
	float ***C = create_three_dim_float(640, 500, 860, "zeros");

	for (int a = 0; a < 325; a++)
	{
	  
	    A[a]=A[a+3]/0.485;
	  
	    A[a]=0.589;
	}

    return 0;
}