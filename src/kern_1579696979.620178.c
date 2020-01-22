#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(660, 400, 150, "ones");

	for (int a = 5; a < 660; a++)
	{
	  
	    A[a][a][a]=A[a][a-1][a-3]-0.196;
	  
	    A[a][a][a]=A[a-1][a-3][a-4]+0.225;
	}

    return 0;
}