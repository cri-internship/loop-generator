#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(620, 210, 730, "ones");

	for (int a = 5; a < 617; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-5][a-1]+0.245;
	  
	    A[a][a][a]=A[a+1][a+3][a+1]/0.871;
	}

    return 0;
}