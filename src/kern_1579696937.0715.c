#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(230, 30, "random");
	float **A = create_two_dim_float(470, 830, "random");

	for (int a = 5; a < 225; a++)
	{
	  
	    A[a][a]=A[a-2][a-4]*0.428;
	  
	    B[a][a]=B[a+5][a+1]-0.607;
	  
	    A[a][a]=A[a+3][a+3]/0.976;
	  
	    B[a][a]=B[a+5][a+5]/A[a][a];
	}

    return 0;
}