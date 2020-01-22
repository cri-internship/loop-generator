#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(940, 40, "zeros");

	for (int a = 0; a < 935; a++)
	{
	  
	    A[a][a]=A[a][a+4]/0.906;
	  
	    A[a][a]=0.647;
	}

    return 0;
}