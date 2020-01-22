#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(270, 780, "random");
	float ***A = create_three_dim_float(130, 130, 510, "random");
	float *B = create_one_dim_float(720, "random");

	for (int a = 5; a < 130; a++)
	{
	  
	    A[a][a][a]=A[a][a-1][a-2]*0.192;
	  
	    A[a][a][a]=A[a-1][a-3][a-5]+0.526;
	  
	    A[a][a][a]=A[a-5][a-5][a]+0.939;
	}

    return 0;
}