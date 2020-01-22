#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(160, 400, 560, "ones");
	float *A = create_one_dim_float(540, "ones");

	for (int a = 4; a < 160; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-4][a-3]-0.034;
	}

    return 0;
}