#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(330, "ones");

	for (int a = 0; a < 327; a++)
	{
	  
	    A[a]=A[a+1]*0.654;
	  
	    float var_a=A[a]-0.938;
	    float var_b=A[a+3]-0.725;
	}

    return 0;
}