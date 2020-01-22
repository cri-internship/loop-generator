#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(550, "zeros");
	float **A = create_two_dim_float(400, 910, "zeros");

	for (int a = 0; a < 399; a++)
	{
	  
	    A[a][a]=0.741;
	    A[a][a+1]=0.83;
	}

    return 0;
}