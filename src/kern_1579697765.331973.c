#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(150, "ones");
	float **A = create_two_dim_float(480, 400, "ones");

	for (int a = 2; a < 145; a++)
	{
	  
	    A[a][a]=A[a][a-2]*0.531;
	  
	    B[a]=B[a-2]+0.499;
	  
	    B[a]=B[a+4]*A[a][a];
	  
	    A[a][a]=A[a+4][a+3]-0.865;
	  
	    B[a]=B[a]+A[a][a];
	    A[a][a]=B[a+5]-0.88;
	}

    return 0;
}