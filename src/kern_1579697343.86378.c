#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(20, 320, "ones");
	int **B = create_two_dim_int(230, 570, "ones");

	for (int a = 2; a < 17; a++)
	{
	  
	    B[a][a]=B[a-2][a-1]/10;
	  
	    A[a][a]=B[a][a];
	    A[a+2][a+3]=B[a][a];
	  
	    B[a][a]=B[a][a]-A[a][a];
	    A[a][a]=B[a+1][a+2]*A[a][a];
	}

    return 0;
}