#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(400, "random");
	float **D = create_two_dim_float(850, 840, "random");
	float *A = create_one_dim_float(20, "random");
	float *B = create_one_dim_float(40, "random");

	for (int a = 0; a < 19; a++)
	{
	  
	    A[a]=A[a+1]*0.536;
	  
	    C[a]=B[a]+D[a][a];
	    C[a]=A[a]*D[a][a];
	}

    return 0;
}