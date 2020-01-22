#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(940, "zeros");

	for (int a = 4; a < 940; a++)
	{
	  
	    A[a]=0.432;
	    float  var_a=A[a]*0.653;
	  
	    A[a]=A[a-4]+0.033;
	  
	    float var_b=A[a]/0.613;
	    A[a]=0.986;
	}

    return 0;
}