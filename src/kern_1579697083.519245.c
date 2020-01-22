#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(310, "random");
	float *C = create_one_dim_float(830, "random");
	float *B = create_one_dim_float(350, "random");
	float **D = create_two_dim_float(920, 310, "random");

	for (int a = 5; a < 310; a++)
	{
	  
	    A[a]=C[a]+D[a][a];
	    C[a]=A[a]+B[a];
	  
	    A[a]=A[a-5]*0.174;
	  
	    C[a]=C[a+4]+A[a];
	  
	    D[a][a]=D[a+2][a+4]/B[a];
	  
	    D[a][a]=A[a];
	}

    return 0;
}