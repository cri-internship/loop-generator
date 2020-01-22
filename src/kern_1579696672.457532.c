#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(700, 630, 470, "random");

	for (int a = 5; a < 695; a++)
	{
	  
	    A[a][a][a]=A[a+5][a][a+1]/6;
	  
	    A[a][a][a]=41;
	}

    return 0;
}