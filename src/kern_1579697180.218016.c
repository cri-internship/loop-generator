#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(240, 160, "random");
	int **A = create_two_dim_int(150, 490, "random");

	for (int a = 0; a < 146; a++)
	{
	  
	    A[a][a]=A[a+1][a+4]/B[a][a];
	}

    return 0;
}