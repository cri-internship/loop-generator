#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(220, 1000, 830, "ones");
	float *B = create_one_dim_float(160, "ones");
	float **A = create_two_dim_float(130, 860, "ones");
	float *C = create_one_dim_float(790, "ones");

	for (int a = 0; a < 157; a++)
	{
	  
	    B[a]=B[a+3]-0.313;
	  
	    C[a]=B[a]+D[a][a][a]/C[a];
	    B[a]=B[a+2]-A[a][a];
	}

    return 0;
}