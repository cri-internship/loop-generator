#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(900, "ones");
	float **C = create_two_dim_float(320, 520, "ones");
	float *B = create_one_dim_float(150, "ones");

	for (int a = 4; a < 146; a++)
	{
	  
	    A[a]=A[a-4]*C[a][a]-0.071;
	  
	    A[a]=A[a+5]-0.78+C[a][a];
	  
	    A[a]=A[a+3]/0.428;
	  
	    B[a]=A[a]/C[a][a];
	    B[a+4]=A[a];
	}

    return 0;
}