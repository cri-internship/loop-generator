#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(290, 500, "zeros");
	float *A = create_one_dim_float(600, "zeros");

	for (int a = 3; a < 600; a++)
	{
	  
	    B[a][a]=A[a]+0.408;
	    A[a]=B[a][a];
	  
	    A[a]=0.914;
	  
	    A[a]=A[a]-0.989;
	    B[a][a]=A[a-3]+0.457;
	}

    return 0;
}