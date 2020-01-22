#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(250, "zeros");
	float ***A = create_three_dim_float(300, 230, 490, "zeros");

	for (int a = 0; a < 246; a++)
	{
	  
	    float var_a=B[a]*0.132;
	    float var_b=B[a+4]-0.728;
	}

    return 0;
}