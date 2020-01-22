#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(730, "ones");
	float **A = create_two_dim_float(450, 890, "ones");

	for (int a = 5; a < 450; a++)
	{
	  
	    B[a]=B[a-3]*0.04;
	  
	    B[a]=B[a+1]*A[a][a];
	  
	    B[a]=A[a][a]-B[a];
	    A[a][a]=A[a-5][a-1]-0.519;
	}

    return 0;
}