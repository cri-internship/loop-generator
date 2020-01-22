#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(920, "ones");
	float ***A = create_three_dim_float(630, 150, 790, "ones");
	float **B = create_two_dim_float(390, 10, "ones");

	for (int a = 5; a < 630; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-3][a-5]*0.385;
	}

    return 0;
}