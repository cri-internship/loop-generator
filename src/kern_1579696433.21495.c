#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(340, "zeros");
	float ***A = create_three_dim_float(380, 590, 480, "zeros");

	for (int a = 5; a < 340; a++)
	{
	  
	    B[a]=0.288;
	    B[a-5]=0.672;
	}

    return 0;
}