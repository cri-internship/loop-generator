#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(430, 290, "ones");
	float *C = create_one_dim_float(580, "ones");
	float ***B = create_three_dim_float(280, 70, 760, "ones");

	for (int a = 3; a < 430; a++)
	{
	  
	    C[a]=C[a-3]+B[a][a][a]/A[a][a];
	  
	    A[a][a]=A[a-3][a]/0.012;
	}

    return 0;
}