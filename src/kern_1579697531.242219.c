#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(760, 440, "zeros");
	int **A = create_two_dim_int(530, 730, "zeros");

	for (int a = 5; a < 525; a++)
	{
	  
	    A[a][a]=A[a-5][a]/34;
	  
	    A[a][a]=A[a+3][a+5]+35;
	  
	    A[a][a]=A[a+2][a+2]*4;
	  
	    A[a][a]=A[a+2][a+5]+B[a][a];
	  
	    B[a][a]=A[a][a];
	    B[a-5][a-2]=A[a][a];
	}

    return 0;
}