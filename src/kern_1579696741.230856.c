#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(560, 840, 720, "random");

	for (int a = 0; a < 559; a++)
	{
	  
	    A[a][a][a]=A[a+1][a+1][a+1]+0.107;
	}

    return 0;
}