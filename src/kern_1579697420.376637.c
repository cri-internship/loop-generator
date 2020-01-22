#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(560, 190, "random");
	float *B = create_one_dim_float(450, "random");

	for (int a = 5; a < 446; a++)
	{
	  
	    B[a]=B[a-1]+0.716;
	  
	    A[a][a]=A[a][a-4]-0.172;
	  
	    A[a][a]=A[a-2][a-3]*0.973;
	  
	    A[a][a]=A[a-5][a-4]-0.936;
	  
	    B[a]=0.802;
	}

    return 0;
}