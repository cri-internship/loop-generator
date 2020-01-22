#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(930, 800, 490, "zeros");

	for (int a = 0; a < 925; a++)
	{
	  
	    A[a][a][a]=41;
	    A[a+5][a][a+3]=7;
	}

    return 0;
}