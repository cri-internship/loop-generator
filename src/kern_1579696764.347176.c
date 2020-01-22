#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(360, 900, 660, "zeros");

	for (int a = 0; a < 356; a++)
	{
	  
	    A[a][a][a]=A[a+4][a][a+2]/0.085;
	}

    return 0;
}