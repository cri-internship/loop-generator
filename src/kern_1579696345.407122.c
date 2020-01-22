#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(550, 340, "random");
	int **B = create_two_dim_int(870, 950, "random");

	for (int a = 4; a < 870; a++)
	{
	  
	    B[a][a]=B[a-3][a-1]/23;
	  
	    B[a][a]=B[a-4][a-1]/1;
	}

    return 0;
}