#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(820, 950, 790, "ones");
	float *B = create_one_dim_float(820, "ones");
	float *A = create_one_dim_float(140, "ones");

	for (int a = 0; a < 135; a++)
	{
	  
	    A[a]=A[a+5]/C[a][a][a]*B[a];
	}

    return 0;
}