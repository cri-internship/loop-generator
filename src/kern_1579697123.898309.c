#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(870, 740, 50, "ones");
	float **B = create_two_dim_float(530, 160, "ones");

	for (int a = 3; a < 870; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-1][a]*0.616;
	  
	    A[a][a][a]=A[a][a-1][a]+0.367;
	}

    return 0;
}