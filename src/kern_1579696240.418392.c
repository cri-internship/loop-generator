#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(700, 60, "zeros");
	float **B = create_two_dim_float(220, 680, "zeros");

	for (int a = 0; a < 217; a++)
	{
	  
	    A[a][a]=A[a+5][a+5]+B[a][a];
	  
	    B[a][a]=B[a+1][a+3]+0.155;
	  
	    A[a][a]=A[a][a]-0.614;
	    B[a][a]=A[a+5][a]+B[a][a];
	}

    return 0;
}