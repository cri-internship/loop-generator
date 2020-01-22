#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(100, "random");
	float ***A = create_three_dim_float(310, 690, 410, "random");

	for (int a = 5; a < 100; a++)
	{
	  
	    B[a]=B[a-5]-0.663;
	  
	    A[a][a][a]=B[a];
	    A[a-2][a-3][a-4]=B[a];
	  
	    B[a]=A[a][a][a]+0.382;
	    A[a][a][a]=A[a-3][a][a-4]*B[a];
	}

    return 0;
}