#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(670, 780, "random");
	float *A = create_one_dim_float(770, "random");

	for (int a = 0; a < 665; a++)
	{
	  
	    A[a]=A[a]/0.253;
	    A[a]=B[a][a];
	  
	    B[a][a]=A[a];
	    B[a][a+2]=0.97;
	  
	    B[a][a]=0.242;
	}

    return 0;
}