#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(30, 890, "zeros");
	float **B = create_two_dim_float(140, 640, "zeros");
	float **A = create_two_dim_float(870, 430, "zeros");

	for (int a = 5; a < 136; a++)
	{
	  
	    B[a][a]=B[a][a-5]*0.499;
	  
	    A[a][a]=A[a+3][a+5]-0.95;
	  
	    A[a][a]=A[a+5][a+2]/0.085;
	  
	    B[a][a]=A[a][a]*C[a][a];
	}

    return 0;
}