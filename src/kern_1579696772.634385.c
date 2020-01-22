#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(640, 350, "zeros");
	int **A = create_two_dim_int(140, 890, "zeros");

	for (int a = 2; a < 640; a++)
	{
	  
	    B[a][a]=B[a-2][a]/A[a][a];
	}

    return 0;
}