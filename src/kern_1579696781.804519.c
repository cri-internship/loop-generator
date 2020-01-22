#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(400, 820, 340, "ones");
	float *A = create_one_dim_float(580, "ones");

	for (int a = 0; a < 575; a++)
	{
	  
	    float var_a=A[a]*0.812;
	    float var_b=A[a+5]+0.851;
	}

    return 0;
}