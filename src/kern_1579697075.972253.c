#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(300, "zeros");
	float ***A = create_three_dim_float(330, 890, 390, "zeros");
	float ***D = create_three_dim_float(490, 990, 600, "zeros");
	float **E = create_two_dim_float(130, 790, "zeros");
	float ***B = create_three_dim_float(780, 910, 390, "zeros");

	for (int a = 3; a < 127; a++)
	{
	  
	    D[a][a][a]=D[a-3][a-1][a-1]/0.023;
	  
	    E[a][a]=0.236;
	    E[a+2][a+3]=0.928;
	}

    return 0;
}