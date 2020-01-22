#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(490, "zeros");
	float ***C = create_three_dim_float(1000, 870, 910, "zeros");
	float **A = create_two_dim_float(870, 180, "zeros");

	for (int a = 0; a < 995; a++)
	{
	  
	    C[a][a][a]=C[a+4][a][a+5]/0.935;
	}

    return 0;
}