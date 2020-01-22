#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(780, "random");
	float *B = create_one_dim_float(110, "random");
	float **A = create_two_dim_float(520, 870, "random");

	for (int a = 2; a < 107; a++)
	{
	  
	    A[a][a]=A[a-2][a-1]*0.166;
	  
	    B[a]=B[a+3]/C[a]*0.678;
	  
	    B[a]=B[a+1]-0.035;
	  
	    C[a]=B[a]-A[a][a];
	    C[a-2]=B[a];
	}

    return 0;
}