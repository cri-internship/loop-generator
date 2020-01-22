#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(970, 520, "zeros");
	int **A = create_two_dim_int(110, 850, "zeros");

	for (int a = 3; a < 106; a++)
	{
	  
	    A[a][a]=A[a+4][a+2]*11;
	  
	    B[a][a]=A[a][a];
	    B[a][a-3]=A[a][a];
	  
	    A[a][a]=B[a][a];
	}

    return 0;
}