#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(320, 940, 980, "random");

	for (int a = 0; a < 316; a++)
	{
	  
	    A[a][a][a]=4;
	    A[a+4][a+1][a]=46;
	}

    return 0;
}