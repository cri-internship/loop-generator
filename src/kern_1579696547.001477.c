#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(830, 740, "ones");
	int **B = create_two_dim_int(690, 420, "ones");

	for (int a = 5; a < 685; a++)
	{
	  
	    B[a][a]=B[a-4][a-5]/A[a][a];
	  
	    A[a][a]=A[a-3][a-2]/34;
	  
	    A[a][a]=29;
	  
	    B[a][a]=B[a][a]-A[a][a];
	    A[a][a]=B[a+3][a+5]-1;
	}

    return 0;
}