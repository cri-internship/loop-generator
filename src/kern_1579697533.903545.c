#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(290, 810, 440, "random");

	for (int a = 1; a < 286; a++)
	{
	  
	    A[a][a][a]=A[a][a][a-1]+0.79;
	  
	    A[a][a][a]=A[a+3][a+1][a+4]*0.083;
	  
	    double var_a=A[a][a][a]+0.519;
	    double var_b=A[a+1][a+2][a+1]*0.486;
	}

    return 0;
}