#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(790, 130, "ones");
	float *A = create_one_dim_float(670, "ones");
	float **C = create_two_dim_float(610, 120, "ones");

	for (int a = 4; a < 606; a++)
	{
	  
	    A[a]=B[a][a]-C[a][a];
	    C[a][a]=A[a]*C[a][a]+B[a][a];
	  
	    B[a][a]=B[a-1][a-4]-0.25;
	  
	    C[a][a]=C[a+4][a]*0.85;
	  
	    B[a][a]=B[a+5][a+5]*A[a]/A[a];
	  
	    B[a][a]=B[a+5][a]*0.665;
	  
	    A[a]=0.547;
	}

    return 0;
}