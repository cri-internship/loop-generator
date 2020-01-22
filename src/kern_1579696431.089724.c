#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(980, 550, "zeros");
	int *A = create_one_dim_int(530, "zeros");

	for (int a = 2; a < 529; a++)
	{
	  
	    B[a][a]=B[a-1][a-2]*A[a];
	  
	    A[a]=B[a][a];
	    A[a-2]=B[a][a];
	  
	    A[a]=B[a][a];
	  
	    B[a][a]=B[a][a]-A[a];
	    A[a]=B[a+5][a+3]-A[a];
	}

    return 0;
}