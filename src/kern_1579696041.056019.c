#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(660, "zeros");
	float *B = create_one_dim_float(180, "zeros");

	for (int a = 2; a < 656; a++)
	{
	  
	    A[a]=A[a+4]+0.263;
	  
	    A[a]=A[a+1]-0.679;
	}

    return 0;
}