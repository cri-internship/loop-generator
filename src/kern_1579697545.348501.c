#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(1000, 280, 600, "random");
	float *B = create_one_dim_float(330, "random");
	float *C = create_one_dim_float(470, "random");

	for (int a = 5; a < 327; a++)
	{
	  
	    A[a][a][a]=A[a][a][a-5]/C[a]+B[a];
	  
	    A[a][a][a]=A[a-1][a][a-1]/B[a];
	  
	    C[a]=C[a]/A[a][a][a];
	    C[a]=0.812;
	  
	    C[a]=C[a+2]/0.957;
	  
	    A[a][a][a]=A[a+1][a][a+3]-B[a];
	  
	    B[a]=A[a][a][a]/C[a];
	    B[a+3]=A[a][a][a];
	}

    return 0;
}