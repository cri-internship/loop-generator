#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(760, 380, "zeros");
	float **A = create_two_dim_float(100, 240, "zeros");

	for (int a = 5; a < 95; a++)
	{
	  
	    A[a][a]=A[a-3][a-1]-0.917;
	  
	    A[a][a]=A[a-5][a-4]+B[a][a];
	  
	    A[a][a]=A[a+5][a+1]+B[a][a];
	}

    return 0;
}