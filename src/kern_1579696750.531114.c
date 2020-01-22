#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(610, "ones");
	float *A = create_one_dim_float(30, "ones");
	float **C = create_two_dim_float(470, 670, "ones");

	for (int a = 5; a < 30; a++)
	{
	  
	    B[a]=B[a-4]+0.012;
	  
	    A[a]=A[a-5]/0.318;
	}

    return 0;
}