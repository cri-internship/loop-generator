#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(860, 750, "zeros");
	float ***B = create_three_dim_float(650, 830, 250, "zeros");
	float *C = create_one_dim_float(110, "zeros");

	for (int a = 4; a < 646; a++)
	{
	  
	    A[a][a]=A[a-4][a-3]*0.495;
	  
	    B[a][a][a]=B[a][a][a-2]-C[a];
	  
	    A[a][a]=B[a][a][a]+C[a];
	  
	    B[a][a][a]=A[a][a]+B[a][a][a];
	    C[a]=A[a+3][a+4]*0.526-B[a][a][a];
	  
	    A[a][a]=B[a][a][a]*0.764;
	    C[a]=B[a+4][a+1][a+2]+C[a]-A[a][a];
	}

    return 0;
}