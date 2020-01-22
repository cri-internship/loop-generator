#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(310, 280, "random");
	float ***A = create_three_dim_float(120, 180, 520, "random");
	float ***C = create_three_dim_float(10, 730, 790, "random");

	for (int a = 5; a < 10; a++)
	{
	  
	    B[a][a]=B[a+3][a+1]-A[a][a][a]+C[a][a][a];
	  
	    A[a][a][a]=A[a][a+1][a+1]/0.672;
	  
	    A[a][a][a]=A[a+2][a][a+4]+B[a][a];
	  
	    B[a][a]=B[a+1][a+2]+0.1;
	  
	    C[a][a][a]=A[a][a][a]-B[a][a];
	    C[a-5][a-3][a-4]=B[a][a];
	  
	    B[a][a]=B[a][a]/A[a][a][a];
	    A[a][a][a]=B[a-2][a-3]*C[a][a][a];
	}

    return 0;
}