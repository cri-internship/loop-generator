#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(550, 510, 140, "ones");

	for (int a = 4; a < 550; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-2][a-4]*0.106;
	}

    return 0;
}