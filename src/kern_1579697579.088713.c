#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(380, 130, 800, "random");
	int ***B = create_three_dim_int(790, 250, 620, "random");

	for (int a = 2; a < 790; a++)
	{
	  
	    B[a][a][a]=15;
	    B[a-2][a-2][a]=24;
	}

    return 0;
}