#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(560, 860, "zeros");
	float **A = create_two_dim_float(180, 830, "zeros");

	for (int a = 5; a < 175; a++)
	{
	  
	    B[a][a]=B[a-1][a-3]+0.712;
	  
	    A[a][a]=A[a][a+5]+0.344;
	  
	    A[a][a]=B[a][a];
	  
	    B[a][a]=A[a][a]*B[a][a];
	    A[a][a]=A[a+3][a+5]-B[a][a];
	}

    return 0;
}