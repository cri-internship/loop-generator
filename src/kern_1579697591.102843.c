#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(190, 670, "random");

	for (int a = 0; a < 185; a++)
	{
	  
	    A[a][a]=A[a+1][a]+0.994;
	  
	    A[a][a]=0.943;
	}

    return 0;
}