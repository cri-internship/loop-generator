#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(630, "random");
	float **B = create_two_dim_float(310, 320, "random");

	for (int a = 3; a < 307; a++)
	{
	  
	    B[a][a]=B[a][a+1]+A[a];
	  
	    float var_a=A[a]-0.307;
	    A[a]=0.924;
	  
	    B[a][a]=B[a][a+3]/0.338;
	  
	    A[a]=B[a][a];
	}

    return 0;
}